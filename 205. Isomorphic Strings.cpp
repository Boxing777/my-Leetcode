class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> s_map;
        unordered_map<char, bool> t_map;

        for (int i = 0; i < s.length(); i++) {
            if (s_map.count(s[i])) {
                if (s_map[s[i]] != t[i]) return false;
            }
            else {
                if (t_map[t[i]]) return false;

                s_map[s[i]] = t[i];
                t_map[t[i]] = true;
            }
        }

        return true;
    }

    /*
        // two HashMap
        bool isIsomorphic(string s, string t) {
            unordered_map<char, int> s_map, t_map;

            for(int i=0; i < s.length(); i++){
                if(s_map.find(s[i]) == s_map.end()){  // 判斷是否不存在於 map  => 不能寫這樣 !s_map.find(s[i])
                    s_map[s[i]] = i;
                }

                if(t_map.find(t[i]) == t_map.end()){
                    t_map[t[i]] = i;
                }

                if(s_map[s[i]] != t_map[t[i]]){ // 因兩個string會同時往下一個走，且沒有在map內才會新增，故直接比較
                    return false;
                }
            }

            return true;
        }
    */
};