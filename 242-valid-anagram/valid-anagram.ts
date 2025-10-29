function isAnagram(s: string, t: string): boolean {
    if (s.length != t.length) return false;
    let mp = new Map<string, number>();

    for (let i = 0; i < s.length; i++) {
        mp.set(s[i], (mp.get(s[i]) || 0) + 1);
        mp.set(t[i], (mp.get(t[i]) || 0) - 1);
    }
    for (const [key, value] of mp) {
        if (value != 0) return false;
    }
    return true;
};