class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char, string> map;
        unordered_map<string, bool> s_map;
        string str = "";
        int p_index = 0;

        for (int i = 0; i <= s.length(); i++) {
            if (s[i] == ' ' || s[i] == '\0') {
                if (map.count(pattern[p_index])) {
                    if (map[pattern[p_index]] != str) {
                        return false;
                    }
                }
                else {
                    if (s_map[str]) return false;

                    map[pattern[p_index]] = str;
                    s_map[str] = true;
                }

                p_index++;
                str = "";
            }
            else {
                str += s[i];
            }
        }

        if (p_index != pattern.length()) return false;

        return true;
    }
};