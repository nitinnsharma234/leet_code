class Solution {
public:
    string frequencySort(string s) {
        int asciiSymbols[128]{0};

        for (char x : s) {
            asciiSymbols[(unsigned char)x]++; // use unsigned char to avoid
                                              // negative indices
        }

        vector<pair<int, char>> vt;
        for (int i = 0; i < 128; i++) {
            if (asciiSymbols[i] > 0) {
                vt.push_back({asciiSymbols[i], (char)i});
            }
        }
        sort(vt.begin(), vt.end(), [](pair<int, char> a, pair<int, char> b) {
            return a.first > b.first;
        });
        string ans = "";
        for (auto x : vt) {
            int k = x.first;
            while (k > 0) {
                ans += x.second;
                k--;
            }
        }
        return ans;
    }
};