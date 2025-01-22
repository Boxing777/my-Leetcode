class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        int len = 0, last_one = strs.size() - 1;
        string result = "";

        sort(strs.begin(), strs.end());
        len = min(strs[0].size(), strs[last_one].size());

        for (int i = 0; i < len; i++) {
            if (strs[0][i] == strs[last_one][i]) {
                result += strs[0][i];
            }
            else {
                break;
            }
        }

        return result;
    }
};