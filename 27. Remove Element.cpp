class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex=0 , fastIndex=0;
        for (fastIndex; fastIndex < nums.size(); fastIndex++){
            if(val != nums[fastIndex]){
                nums[slowIndex] = nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;
    }
};
