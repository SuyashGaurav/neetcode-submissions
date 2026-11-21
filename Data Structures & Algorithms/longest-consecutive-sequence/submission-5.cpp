class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        st.reserve(nums.size());
        st.insert(nums.begin(), nums.end());

        int maxLength = 0;
        for(auto num: st) {
            if(st.find(num-1) == st.end()) {
                int length = 1;
                int startingNum = num;
                while(st.find(startingNum+1) != st.end()) {
                    startingNum++;
                    length++;
                }
                maxLength = max(maxLength, length);
            }
        }
        return maxLength;
    }
};
