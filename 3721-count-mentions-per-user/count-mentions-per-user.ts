function countMentions(numberOfUsers: number, events: string[][]): number[] {

    // Result: mention count for each user
    const mentionsCount = new Array(numberOfUsers).fill(0);

    // When does each user come back online? (0 = online initially)
    const offlineUntil = new Array(numberOfUsers).fill(0);

    // Sorting: sort by timestamp, and at same timestamp OFFLINE before MESSAGE
    events.sort((a, b) => {
        const t1 = Number(a[1]);
        const t2 = Number(b[1]);

        if (t1 !== t2) return t1 - t2;

        // Same timestamp: OFFLINE first
        const isAOffline = a[0] === "OFFLINE";
        const isBOffline = b[0] === "OFFLINE";

        return (isAOffline === isBOffline) ? 0 : (isAOffline ? -1 : 1);
    });

    // Helper: check if user is online at this timestamp
    const isOnline = (id: number, time: number) =>
        offlineUntil[id] <= time;

    // Process events in chronological order
    for (const e of events) {
        const [type, timeStr, value] = e;
        const time = Number(timeStr);

        if (type === "OFFLINE") {
            const userId = Number(value);
            offlineUntil[userId] = time + 60;
            continue;
        }

        // MESSAGE event
        if (value === "ALL") {
            // ALL = mentions every user, even offline
            for (let i = 0; i < numberOfUsers; i++) {
                mentionsCount[i]++;
            }
        }
        else if (value === "HERE") {
            // HERE = only online users
            for (let i = 0; i < numberOfUsers; i++) {
                if (isOnline(i, time)) mentionsCount[i]++;
            }
        }
        else {
            // idX explicit mentions
            const ids = value.split(" ").map(s => Number(s.substring(2)));
            for (const id of ids) {
                mentionsCount[id]++;
            }
        }
    }

    return mentionsCount;
}
