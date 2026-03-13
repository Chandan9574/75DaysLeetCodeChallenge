class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            bool flag=false;
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j]==nums[j+1]) return true;
                else if(nums[j]>nums[j+1]){
                    swap(nums[j], nums[j+1]);
                    flag=true;
                }
            }
            if(flag==false) return false;
        }
        return false;
    }
};