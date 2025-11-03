function minCost(colors: string, neededTime: number[]): number {
   let totalCost = 0;
  let maxTimeInGroup = neededTime[0]; // track max in current color group

  for (let i = 1; i < colors.length; i++) {
    if (colors[i] === colors[i - 1]) {
      // same color as previous → need to remove one
      totalCost += Math.min(maxTimeInGroup, neededTime[i]);
      // keep the higher time balloon
      maxTimeInGroup = Math.max(maxTimeInGroup, neededTime[i]);
    } else {
      // new color → reset max tracker
      maxTimeInGroup = neededTime[i];
    }
  }

  return totalCost;
};