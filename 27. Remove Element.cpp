class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        int k = 0; // ��l�Ƥ@�ӫ��w k�A�ΨӫO�s���������ަ�m

        for (int i = 0; i < nums.size(); i++) { // ���X�}�C�����C�@�Ӥ���
            if (nums[i] != val) { // �p�G��e����������ؼЭ� val
                nums[k] = nums[i]; // �N�D�ؼЭȪ��������� k ���w������m
                k++;               // ��s k ���w
            }
        }

        return k; // ��^�s�}�C������
    }
};