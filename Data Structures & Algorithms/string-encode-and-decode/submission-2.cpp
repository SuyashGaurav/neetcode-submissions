class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";
        for(auto &str: strs) {
            for(auto &ch: str) {
                int ascii = static_cast<int> (ch);
                en = en + to_string(ascii) + " ";
            }
            en += "#";
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string str = "";
        string temp = "";
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '#') {
                ans.push_back(str);
                str = "";
                continue;
            }
            if(s[i] == ' ') {
                char ch = (char)std::stoi(temp);
                str += ch;
                temp = "";
                continue;
            }
            temp += s[i];
        }
        return ans;
    }
};
