function countMentions(numberOfUsers: number, events: string[][]): number[] {

    const users: number[] = new Array(numberOfUsers).fill(0);
    function compareNumbers(a:string[], b:string[]):number {
        const numA = Number(a[1]);
  const numB = Number(b[1]);

  if (numA !== numB) {
    return numA - numB; // normal numeric sort
  }


  const isAOffline = a[0] === "OFFLINE";
  const isBOffline = b[0] === "OFFLINE";

  if (isAOffline && !isBOffline) return -1; // a first
  if (!isAOffline && isBOffline) return 1;  // b first

  return 0;
}
events.sort(compareNumbers);

// console.log(events);
    const userStatus: number[] = new Array(numberOfUsers).fill(0);
    function isUserOnline(id:number,timeStamp:number):boolean{
        return userStatus[id]<= timeStamp;
    }
    for (const event of events) {
        const type = event[0];
        const timeStamp = +event[1];
        const mentions = event[2];
        if (type == "MESSAGE") {
            if (mentions == "HERE") {
                for (let i = 0; i < userStatus.length; i++) {
                    if(isUserOnline(i,timeStamp)){
                          users[i]++;
                    }
                }
            }
            else if (mentions=="ALL"){
                 for (let i = 0; i < userStatus.length; i++) {
                        users[i]++;
                }
            }
            else{
             const ids = mentions.split(" ").map(e => +e.substring(2));
             for(let j=0;j<ids.length;j++){
                
                         users[ids[j]]++;
                    
                
             }
            }
        }
        else {
            userStatus[+mentions] = +timeStamp + 60;
        }
        // console.log(users);

    }
    return users;


};

