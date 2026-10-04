class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
unordered_map<int,int>tracker;
int n = nums.size();
for (int  i  = 0 ; i < n ; i++){
 if(tracker.find(nums[i])!=tracker.end()){
    return true;
 }
 tracker[nums[i]]=1;
}
return false;
    }
};