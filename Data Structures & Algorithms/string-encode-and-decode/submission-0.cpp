class Solution {
   public:
    string encode(vector<string>& strs) {
        string s;
        int len;
        for (int i = 0; i < strs.size(); i++) {
            len = strs[i].length();
            s += to_string(len);
            s += "#";
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string a;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            string a = s.substr(j + 1, len);
            ans.push_back(a);
            i = j + 1 + len;
        }
        return ans;
    }
};
