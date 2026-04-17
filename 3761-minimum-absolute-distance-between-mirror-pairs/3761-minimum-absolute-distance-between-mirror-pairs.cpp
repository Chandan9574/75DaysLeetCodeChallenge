class Solution {
public:
    int rev(int n){
        int x=0;
        while(n>0){
            x = x*10 + n%10;
            n /= 10;
        }
        return x;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                ans = min(ans, i-mp[nums[i]]);
            }
            mp[rev(nums[i])] = i;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};