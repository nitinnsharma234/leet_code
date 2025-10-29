class Solution {
public:
    string reverseWords(string s) {
        // Double reverse, time O(n), space O(1)
        // - reverse s, remove spaces
        // - reverse each word

        int i = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == ' ' && (j == 0 || s[j - 1] == ' ')) continue;
            s[i] = s[j];
            ++i;
        }
        if (!s.empty() && s.back() == ' ') --i;
        s.resize(i);
        if (s.empty()) return s;

        // std::cout << std::format("'{}'", s) << std::endl;

        auto Reverse = [](std::string& s, int left, int right) {
            while (left < right) {
                std::swap(s[left], s[right]);
                ++left;
                --right;
            }
        };

        Reverse(s, 0, s.length() - 1);
        int word_start = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ' ') {
                Reverse(s, word_start, i - 1);
                word_start = i + 1;
            }
        }
        Reverse(s, word_start, s.length() - 1);

        return s;
    }
};