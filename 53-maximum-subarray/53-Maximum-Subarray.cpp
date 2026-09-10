class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currentSum=0;
        int n = nums.size();
        for (int i=0 ; i<n ; i++){
      currentSum=max(nums[i],currentSum+nums[i]);
maxsum=max(currentSum,maxsum);
        }
        return maxsum;
    }
};