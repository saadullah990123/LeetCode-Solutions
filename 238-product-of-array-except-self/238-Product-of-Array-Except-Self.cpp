    class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
                int n=nums.size();
        vector<int> leftResult(n);
        int suffix=1,prefix =1;
        for (int i = 0 ; i < n ; i++){
            leftResult[i]=prefix;
            prefix*=nums[i];
        }
        for (int i =n-1 ; i>=0 ; i--){
            leftResult[i]*=suffix;
            suffix*=nums[i];
        }
                    return leftResult;

                }
};
       