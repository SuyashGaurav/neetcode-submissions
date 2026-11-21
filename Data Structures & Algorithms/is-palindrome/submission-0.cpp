class Solution {
public:
    bool alphanumeric(char ch) {
        return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'); 
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0, j=n-1;
        for(auto &ch: s){
            if(ch >= 'a' && ch <= 'z') ch = ch - 32;
        }

        while(i<j) {
            while(i<n && !alphanumeric(s[i])) i++;
            while(j >= 0 && !alphanumeric(s[j])) j--;

            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }
};
