class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = static_cast<int> (s.size());
        int ans = 0;
        int count[26] = {0};
        int l=0, r=0;
        int maxFreq = 0;
        while(r < n) {
            maxFreq = max(maxFreq, ++count[s[r]-'A']);
            
            while((r-l+1) - maxFreq > k) {
                count[s[l]-'A']--;
                l++;
                // update maxFreq
                for(int i=0; i<26; i++) ans = max(ans, count[i]);
            }

            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};
