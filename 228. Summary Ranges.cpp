class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> result;
        int n = nums.size();

        if (n == 0) return result;

        int start = nums[0];
        for (int i = 0; i < n; i++) {
            if (i == n - 1 || nums[i] + 1 != nums[i + 1]) { // ��e�Ʀr���O�̫�@�� �� �P�U�@�ӼƦr���s��
                // �ˬd�d��O��ӼƦr�٬O�d��
                if (nums[i] == start) { // ��ӼƦr 
                    result.push_back(to_string(nums[i]));
                }
                else { // �d��
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));
                }

                // ��s�_�I
                if (i != nums.size() - 1) {
                    start = nums[i + 1];
                }
            }
        }


        return result;
    }
};