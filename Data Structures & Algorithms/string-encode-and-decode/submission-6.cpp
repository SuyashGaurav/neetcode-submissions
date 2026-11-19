class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        int total_length = 0;
        for(string &s: strs) {
            total_length += s.size() + 4;
        }
        ans.reserve(total_length);
        for(const string &s: strs) {
            ans.append(to_string(s.size()));
            ans.push_back('#');
            ans.append(s);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i < s.size()) {
            int len = 0;
            while(i < s.size() && s[i] != '#') {
                len = len * 10 + (s[i++]-'0');
            }
            i++; // #
            string str = "";
            ans.emplace_back(s, i, len);
            i += len;
        }
        return ans;
    }
};
