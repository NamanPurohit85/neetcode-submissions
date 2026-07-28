class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int i = 0;
        while (true) {
            if (i >= (int)strs[0].size()) return strs[0].substr(0, i);

            char c = strs[0][i];

            for (int a = 1; a < (int)strs.size(); a++) {
                if (i >= (int)strs[a].size() || strs[a][i] != c) return strs[0].substr(0, i);
            }
            i++;
        }
    }
};