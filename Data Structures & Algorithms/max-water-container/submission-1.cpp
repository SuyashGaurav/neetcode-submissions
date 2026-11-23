class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = static_cast<int>(heights.size());
        int i=0, j=n-1;
        int max_area = 0;
        while(i < j) {
            int h = min(heights[i], heights[j]);
            max_area = max(max_area, h*(j-i));

            // narrower width, but less heights than least( i.e. h) - can't produce great results
            while(i<j && heights[i] <= h) ++i;
            while(i<j && heights[j] <= h) --j;
        }
        return max_area;
    }
};
