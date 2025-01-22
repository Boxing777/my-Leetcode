class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int s_index = 0;

        if (t == "" && s == "") return true;

        for (int i = 0; i < t.length(); i++) {
            if (t[i] == s[s_index]) s_index++;
            if (s_index == s.length()) return true;
        }

        return false;
    }
};