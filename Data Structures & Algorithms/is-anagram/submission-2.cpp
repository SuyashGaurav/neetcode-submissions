class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp(26, 0);
        int n = s.size();
        int m = t.size();
        if(n != m) return false;
        for(int i=0; i<n; i++) {
            mp[s[i] - 'a']++;
            mp[t[i] - 'a']--;
        }
        for(auto &it: mp) {
            if(it) return false;
        }
        return true;
    }
};
