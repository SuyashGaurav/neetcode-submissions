class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        int total_length = 0;
        for(string &s: strs) {
            total_length += s.size() + 4;
        }
        ans.reserve(total_length);
        for(string &s: strs) {
            ans += to_string(s.size()) + "#" + s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i < s.size()) {
            string num = "";
            while(i < s.size() && s[i] != '#') {
                num += s[i++];
            }
            i++; // #
            int nums = stoi(num);
            string str = "";
            for(int j=0; j<nums; j++) {
                str += s[i+j];
            }
            i += nums;
            ans.push_back(str);
        }
        return ans;
    }
};
