class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto &it: nums) {
            mp[it]++;
        }
        vector<pair<int, int>> temp;
        for(auto &it:mp) {
            temp.push_back({it.first, it.second});
        }
        sort(temp.begin(), temp.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i=0; i<k; i++) ans.push_back(temp[i].first);
        return ans;
    }
};
