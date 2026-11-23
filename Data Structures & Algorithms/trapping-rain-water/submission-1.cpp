class Solution {
public:
    int trap(vector<int>& height) {
        int n = static_cast<int>(height.size());
        int l = 0, r = n-1;
        int maxL = height[l], maxR = height[r];
        int total = 0;
        while(l < r) {
            if(maxL <= maxR) {
                l++;
                maxL = max(maxL, height[l]);
                total += (maxL - height[l]);
            }
            else {
                r--;
                maxR = max(maxR, height[r]);
                total += (maxR - height[r]);
            }
        }
        return total;
    }
};
