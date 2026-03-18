class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pro1=1;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            ans[i] = pro1;
            pro1 *= nums[i];
        }
        int pro2=1;
        for(int i=n-1;i>=0;i--){
            ans[i] *= pro2;
            pro2 *= nums[i];
        }
        return ans;
    }
};