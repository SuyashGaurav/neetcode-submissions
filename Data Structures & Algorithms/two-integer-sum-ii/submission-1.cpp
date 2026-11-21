class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        int i=1;
        for(auto num: numbers) {
            if(mp.find(target-num) != mp.end()) return {mp[target-num], i};
            mp[num] = i++;
        }
        return {};
    }
};
