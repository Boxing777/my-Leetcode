class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = 0; // 初始化一個指針 k，用來保存元素的索引位置

        for (int i = 0; i < nums.size(); i++) { // 走訪陣列中的每一個元素
            if (nums[i] != val) { // 如果當前元素不等於目標值 val
                nums[k] = nums[i]; // 將非目標值的元素移到 k 指針指的位置
                k++;               // 更新 k 指針
            }
        }

        return k; // 返回新陣列的長度
    }
};