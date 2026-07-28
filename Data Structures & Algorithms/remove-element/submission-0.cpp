class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] == val && nums[j] == val) {
                j--;
                i--;
            }
            else if (nums[i] != val && nums[j] == val) {
                j--;
            }
            else if (nums[i] == val && nums[j] != val) {
                nums[i] = nums[j];
                nums[j] = val;
                j--;
            }
            i++;
        }

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                count++;
            }
        }
        return nums.size() - count;
    }
};