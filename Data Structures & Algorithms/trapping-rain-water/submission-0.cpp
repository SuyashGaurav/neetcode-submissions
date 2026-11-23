class Solution {
public:
    int trap(vector<int>& height) {
        int n = static_cast<int>(height.size());
        vector<int> prefixMax(n, 0);
        vector<int> suffixMax(n, 0);
        for(int i=1; i<n; i++) prefixMax[i] = max(prefixMax[i-1], height[i-1]);
        for(int i=n-2; i>=0; i--) suffixMax[i] = max(suffixMax[i+1], height[i+1]);

        int total = 0;
        for(int i=0; i<n; i++) {
            int trappedWater = min(prefixMax[i], suffixMax[i]) - height[i];
            total += (trappedWater < 0 ? 0 : trappedWater);
        }
        return total;
    }
};
