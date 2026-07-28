class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;

        // store the frequency of each element in nums Vector
        for (int n : nums) {
            freq[n]++;
        }

        // store the freq in VectorPair for sort
        vector<pair<int, int>> freqVec(freq.begin(), freq.end());

        // sort in descending order
        sort(freqVec.begin(), freqVec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) { return a.second > b.second; });

        // push the top k frequent element in a Vector ans
        for (int i = 0; i < k; i++) {
            ans.push_back(freqVec[i].first);
        }
        return ans;
    }
};
