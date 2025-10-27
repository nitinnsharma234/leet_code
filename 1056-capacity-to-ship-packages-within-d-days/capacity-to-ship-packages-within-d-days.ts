function shipWithinDays(weights: number[], days: number): number {
  // Helper: Check if we can ship all packages with capacity `cap` in <= days
  function canShip(weights: number[], days: number, cap: number): boolean {
    let daysNeeded = 1;
    let current = 0;

    for (const w of weights) {
      if (current + w > cap) {
        daysNeeded++;
        current = 0;
      }
      current += w;
      if (daysNeeded > days) return false;
    }

    return true;
  }

  // Initialize binary search range
  let low = 0;
  let high = 0;

  for (const w of weights) {
    low = Math.max(low, w); // at least the heaviest package
    high += w;              // at most the sum of all weights
  }

  // Binary search for minimal capacity
  while (low < high) {
    const mid = Math.floor((low + high) / 2);
    if (canShip(weights, days, mid)) {
      high = mid;  // try smaller capacity
    } else {
      low = mid + 1; // need larger capacity
    }
  }

  return low;
}
