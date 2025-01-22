class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> result;
        int n = nums.size();

        if (n == 0) return result;

        int start = nums[0];
        for (int i = 0; i < n; i++) {
            if (i == n - 1 || nums[i] + 1 != nums[i + 1]) { // 當前數字不是最後一個 或 與下一個數字不連續
                // 檢查範圍是單個數字還是範圍
                if (nums[i] == start) { // 單個數字 
                    result.push_back(to_string(nums[i]));
                }
                else { // 範圍
                    result.push_back(to_string(start) + "->" + to_string(nums[i]));
                }

                // 更新起點
                if (i != nums.size() - 1) {
                    start = nums[i + 1];
                }
            }
        }


        return result;
    }
};