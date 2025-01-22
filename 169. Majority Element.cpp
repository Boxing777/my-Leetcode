class Solution {
public:
    // Unordered Hash Map
    int majorityElement(vector<int>& nums)
    {
        int n = nums.size();
        unordered_map<int, int> map;


        for (const auto& x : nums) {
            map[x]++;
        }

        n = n / 2;
        for (const auto x : map) {
            if (x.second > n)
                return x.first;
        }

        return 0;
    }


    /*
        // Best
        // Moore Voting Algorithm 计щ布簍衡猭ウノ碝т计舱い瞷Ω计禬筁计じ

        int majorityElement(vector<int>& nums) {
            int count=0, candidate=0;

            for(const auto &n : nums){
                if(count == 0){
                    candidate = n;
                }

                if(candidate == n){
                    count++;
                }else{
                    count--;
                }
            }

            return candidate;
        }

    */
};

// https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly