class Solution {
public:
    bool alphanumeric(char ch) {
        return (ch >= 'A' && ch <= 'Z') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= '0' && ch <= '9'); 
    }
    char toLower(char ch) {
        return (ch >= 'A' && ch <= 'Z') ? static_cast<char>(ch + ('a'-'A')) : ch;
    }
    bool isPalindrome(string s) {
        int n = static_cast<int>(s.size());
        int i=0, j=n-1;
        for(auto &ch: s){
            if(ch >= 'a' && ch <= 'z') ch = ch - 32;
        }

        while(i<j) {
            while(i<j && !alphanumeric(s[i])) ++i;
            while(i<j && !alphanumeric(s[j])) --j;

            if(toLower(s[i]) != toLower(s[j])) return false;
            ++i; --j;
        }
        return true;
    }
};
