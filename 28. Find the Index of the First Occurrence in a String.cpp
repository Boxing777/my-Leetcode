class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int h_len = haystack.length(), n_len = needle.length();

        for (int i = 0; i < h_len; i++) {
            if (haystack.substr(i, n_len) == needle) {
                return i;
            }
        }

        return -1;
    }

    /*
        int strStr(string haystack, string needle) {
            int h_len=haystack.length(), n_len=needle.length();
            int n_index=0;

            for(int i=0; i < h_len; i++){
                if(haystack[i] == needle[n_index]){
                    n_index++;
                }else{
                    i -= n_index;
                    n_index=0;
                }

                if(n_index == n_len){
                    return i - n_len + 1;
                }
            }

            return -1;
        }
    */
};