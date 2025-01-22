class Solution {
public:
    bool isHappy(int n)
    {
        unordered_set<int> set;

        while (n != 1) {
            if (set.count(n)) return false;

            set.insert(n);
            n = nextNum(n);
        }

        return true;
    }

private:
    int nextNum(int n)
    {
        int output = 0;

        while (n > 0) {
            int temp = n % 10;
            output += temp * temp;
            n /= 10;
        }

        return output;
    }


    /*
        bool isHappy(int n) {
            unordered_map<string, bool> map;
            vector<int> digit;
            string nums;

            while(n != 1){
                if(map.count(nums)) return false;

                digit = extractDigits(n);
                sort(digit.begin(), digit.end());

                n=0;
                for(int dig : digit){
                    nums += to_string(dig);
                    n += dig*dig;
                }

                map[nums] = true;
                nums = "";

            }

            return true;
        }

    private:
        vector<int> extractDigits(int num){
            vector<int> digit;

            while(num > 0){
                digit.push_back(num % 10);
                num/=10;
            }

            return digit;
        }

    */
};