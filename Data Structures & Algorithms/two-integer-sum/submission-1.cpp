class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i = 0;
        int j = 1;
        while (i != nums.size() - 1) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
            if (j == nums.size() - 1) {
                i++;
                j = i;
            }
            j++;
        }
    }
};
