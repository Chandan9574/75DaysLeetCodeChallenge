class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        vector<int> ans=nums;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
        for(auto &op:operations){
            int old=op[0];
            int newV=op[1];

            int idx=mp[old];
            nums[idx]=newV;
            
            mp.erase(old);
            mp[newV]=idx;
        }
        return nums;
    }
};