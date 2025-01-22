class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int len = 0, last_len = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                len = 0;
            }
            else {
                len++;
                last_len = len;
            }
        }

        return last_len;
    }
};