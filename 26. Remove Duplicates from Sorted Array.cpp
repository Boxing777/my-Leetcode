class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int current_len = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] != nums[i]) {
                nums[current_len] = nums[i];
                current_len++;
            }
        }

        return current_len;
    }

    /*
        // My idea
        int removeDuplicates(vector<int>& nums) {
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i] == nums[i+1]){
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }

            return nums.size();
        }
    */
};