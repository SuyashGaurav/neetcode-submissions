class Solution {
public:
    int trap(vector<int>& height) {
        int n = static_cast<int>(height.size());
        int l = 0, r = n-1;
        int maxL = 0, maxR = 0, total = 0;
        while(l < r) {
            if (height[l] <= height[r]) {
                total += max(0, maxL - height[l]);
                maxL = max(maxL, height[l]);
                ++l;
            }
            else {
                total += max(0, maxR - height[r]);
                maxR = max(maxR, height[r]);
                --r;
            }
        }
        return total;
    }
};
