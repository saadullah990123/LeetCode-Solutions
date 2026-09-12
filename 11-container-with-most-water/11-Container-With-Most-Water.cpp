class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, n = height.size();
        int left = 0, right = n - 1;
        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int currentWater = h * width;
            maxWater = max(maxWater,currentWater);

height[left]<height[right]?left++:right--;
        }
        return maxWater;
    }
};