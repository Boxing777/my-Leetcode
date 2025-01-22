class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i, j = 0;
        int end_index = nums1.size() - 1;

        while (m > 0 && n > 0) {
            if (nums2[n - 1] >= nums1[m - 1]) {
                nums1[end_index] = nums2[n - 1];
                n--;
            }
            else {
                nums1[end_index] = nums1[m - 1];
                m--;
            }

            end_index--;
        }

        while (n > 0) {
            nums1[end_index] = nums2[n - 1];
            n--;
            end_index--;
        }

    }

    /*
        // Best code

        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for(int i=0, j=m; i<n; i++){
                nums1[j]=nums2[i];
                j++;
            }

            sort(nums1.begin(), nums1.end());
        }
    */
};