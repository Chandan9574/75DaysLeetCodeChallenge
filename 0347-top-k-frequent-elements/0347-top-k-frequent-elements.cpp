class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp; // Make a map of <val,freq>
        for(int x:nums) mp[x]++;
        // Make a priority queue 
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(auto x:mp){
            int ele=x.first;
            int freq=x.second;
            pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};