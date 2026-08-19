class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1, maximum = 0, ans = 0;
        while (i < j) {
            ans = min(heights[i], heights[j]) * (j - i);
            maximum = max(ans, maximum);
            if (heights[i] > heights[j]) j--;
            if (heights[i] <= heights[j]) i++;
        }
        return maximum;
    }
};
