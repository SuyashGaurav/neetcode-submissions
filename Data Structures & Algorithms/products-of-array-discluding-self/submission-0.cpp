class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int product = 1;
        int zero = 0;
        for(auto num: nums) {
            if(num == 0) {
                zero++;
                continue;
            }
            product *= num;
        }
        vector<int> ans(nums.size(), 0);
        if(zero > 1) return ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) ans[i] = product;
            else if(zero) ans[i] = 0;
            else ans[i] = product / nums[i];
        }
        return ans;
    }
};
