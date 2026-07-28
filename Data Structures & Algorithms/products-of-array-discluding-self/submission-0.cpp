class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int val = 1;

        for (int i = 0; i < nums.size(); i++) {
            val = 1;
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    val = val * nums[j];
                }
            }
            ans.push_back(val);
        }
        return ans;
    }
};
