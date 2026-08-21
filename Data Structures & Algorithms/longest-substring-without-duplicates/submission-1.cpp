class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;

        int left = 0;
        int maximum = 0;

        for (int right = 0; right < s.size(); right++) {
            m[s[right]]++;

            while (m[s[right]] > 1) {
                m[s[left]]--;
                left++;
            }

            maximum = max(maximum, right - left + 1);
        }
        return maximum;
    }
};
