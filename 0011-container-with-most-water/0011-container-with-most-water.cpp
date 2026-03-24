class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low=0, high=n-1;
        int maxArea=0;
        while(low<high){
            maxArea=max(maxArea, min(height[low], height[high])*(high-low));
            height[high]>height[low]?low++:high--;
        }
        return maxArea;
    }
};