class Solution {
public:
    int trap(vector<int>& height) {
        int n = static_cast<int>(height.size());
        int l = 0, r = n-1;
        int maxL = 0, maxR = 0, total = 0;
        while(l < r) {
            if (height[l] <= height[r]) {
                if (maxL > height[l]) total += (maxL - height[l]);
                else maxL = height[l];
                ++l;
            }
            else {
                if(maxR > height[r]) total += (maxR - height[r]);
                else maxR = height[r];
                --r;
            }
        }
        return total;
    }
};
