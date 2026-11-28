class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = static_cast<int> (s1.size());
        int m = static_cast<int> (s2.size());
        vector<int> count(26, 0);
        for(char ch: s1) count[ch - 'a']++;

        for(int i=0; i<m; i++) {
            vector<int> temp = count;
            for(int j=i; j<m; j++) {
                if(temp[s2[j] - 'a']) {
                    temp[s2[j] - 'a']--;
                }
                else {
                    break;
                }
            }
            int flag = 1;
            for(int c: temp) {
                if(c) {
                    flag = 0; 
                    break;
                } 
            }
            if(flag) return true;
        }
        return false;
    }
};
