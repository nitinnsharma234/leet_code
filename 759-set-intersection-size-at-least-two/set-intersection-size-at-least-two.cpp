class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            if (a[1] == b[1]) return a[0] > b[0];
            return a[1] < b[1];
        });

        int p1 = -1, p2 = -1;  
        int ans = 0;

        for (auto& in : intervals) {
            int l = in[0], r = in[1];
            int count = 0;

            if (p1 >= l) count++;
            if (p2 >= l) count++;

            if (count == 2) continue;

            if (count == 1) {
                ans++;
                p1 = p2;         
                p2 = r;          
            } else { // count == 0
                ans += 2;
                p1 = r - 1;
                p2 = r;
            }
        }

        return ans;
    }
};
