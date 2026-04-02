class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && temp[st.top()]<temp[i]){
                int idx=st.top();
                st.pop();
                ans[idx]=i-idx;
            }
            st.push(i);
        }
        return ans;
    }
};