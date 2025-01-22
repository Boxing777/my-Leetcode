class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> num_index;

        for (int i = 0; i < nums.size(); i++) {
            int element = target - nums[i];

            // hash table 內找到與當前 nums[i] 相加為 target 則回傳兩數的 index
            if (num_index.find(element) != num_index.end()) {
                int element_index = num_index[element];
                return { element_index, i };
            }

            num_index[nums[i]] = i; // 放入 hash table 中 < 值, index > 
        }

        return {};
    }
};