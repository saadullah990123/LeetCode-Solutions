class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n=nums.size();
      vector<int>multiply(n);
      int left=0,right=n-1;
       int pos=n-1;
   while(left<=right){
    int leftSide=nums[left]*nums[left];
    int rightSide=nums[right]*nums[right];
if(leftSide>rightSide){
multiply[pos]=nums[left]*nums[left];
left++;
}
else{
multiply[pos]=nums[right]*nums[right];
right--;
}
pos--;
   }
   return multiply;
    }
};