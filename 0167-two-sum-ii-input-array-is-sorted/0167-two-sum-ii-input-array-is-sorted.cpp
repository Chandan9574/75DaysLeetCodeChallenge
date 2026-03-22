class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low=0, high=n-1;
        while(low<high){
            int req=numbers[low]+numbers[high];
            if(req==target) return {low+1, high+1};
            else if(target-req>0) low++;
            else high--;
        }
        return {};
    }
};