function isAnagram(s: string, t: string): boolean {
    if (s.length != t.length) return false;
     const mp: Record<string, number> = {};

    for (let i = 0; i < s.length; i++) {
        mp[s[i]] = (mp[s[i]] || 0) + 1;
        mp[t[i]] = (mp[t[i]] || 0) - 1;
    }

    for (const key in mp) {
        if (mp[key] !== 0) return false;
    }
    return true;
};