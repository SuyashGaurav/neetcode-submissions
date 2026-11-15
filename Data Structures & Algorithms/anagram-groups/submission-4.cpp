class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> mp;
        for(const auto &str: strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        vector<vector<string>> ans;
        ans.reserve(mp.size());
        for(auto &it: mp) {
            ans.push_back(move(it.second));
        }
        return ans;
    }
};
