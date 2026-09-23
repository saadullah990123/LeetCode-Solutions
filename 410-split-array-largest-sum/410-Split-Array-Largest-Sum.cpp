class Solution {
public:
    bool isValid(vector<int>& nums, int k, int maxAllocation) {
        int painter = 1, totalLength = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxAllocation) {
                return false;
            }
            if (nums[i] + totalLength <= maxAllocation) {
               totalLength+=nums[i];
            } else {
                painter++;
                totalLength = nums[i];
            }
        }
        return painter <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum = 0, maxValue = INT_MIN;
        int n = nums.size();
        if (k > n) {
            return -1;
        }
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxValue = max(maxValue, nums[i]);
        }
        int st = maxValue, end = sum, ans = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (isValid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};