class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        int a = 0, i = 0;
        string result;
        while (1) {
            if (strs.empty()) return "";
            if(strs.size() == 1){
                return strs[0];
            }

            while (a != strs.size() - 1) {
                if (i >= (int)strs[0].size()) {
                    return strs[0].substr(0, i);
                }
                if (strs[a][i] != strs[a + 1][i]) {
                    return result;
                }
                a++;
            }
            result = result + strs[a][i];
            i++;
            a = 0;
        }
    }
};