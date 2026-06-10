class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        //i and j use to iterate and check-two pointer approach
        while (j < t.length()) {
            if (i < s.length() and s[i] == t[j]) {
                i += 1;
            }
            j += 1;
        }
        return i == s.length();
    }
};
