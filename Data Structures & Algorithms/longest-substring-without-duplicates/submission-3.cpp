class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = static_cast<int>(s.size());
        if(n <= 1) return n;
        int l = 0, r = 1;
        unordered_map<char, int> mp;
        mp[s[l]] = 0;
        int ans = 1;

        while(l<r && r<n) {
            if(mp.find(s[r]) != mp.end() && mp[s[r]] >= l) {
                l = mp[s[r]]+1;
            }

            ans = max(ans, r-l+1);
            mp[s[r]] = r;
            r++;
        }
        return ans;
    }
};
