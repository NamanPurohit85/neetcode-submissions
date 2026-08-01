class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        while (n--) {
            nums1[m] = nums2[i];
            i++;
            m++;
        }
        sort(nums1.begin(), nums1.end());
    }
};