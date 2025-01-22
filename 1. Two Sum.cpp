class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> num_index;

        for (int i = 0; i < nums.size(); i++) {
            int element = target - nums[i];

            // hash table �����P��e nums[i] �ۥ[�� target �h�^�Ǩ�ƪ� index
            if (num_index.find(element) != num_index.end()) {
                int element_index = num_index[element];
                return { element_index, i };
            }

            num_index[nums[i]] = i; // ��J hash table �� < ��, index > 
        }

        return {};
    }
};