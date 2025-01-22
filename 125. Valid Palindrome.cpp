class Solution {
public:
    bool isPalindrome(string s)
    {
        int start = 0, end = s.length() - 1;

        while (start < end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            else {
                start++;
                end--;
            }
        }

        return true;
    }


    /*
        bool isPalindrome(string s) {
            string str;
            int len=0;

            for(char c : s){
                if(isalnum(c)){
                    str += tolower(c);
                }
            }

            len = str.length();
            for(int i=0; i < len/2; i++){
                if(str[i] != str[len-1-i]){
                    return false;
                }
            }

            return true;
        }
    */
};