class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char> st;
        int maxLength=0;
        int i=0;
        for(int j=0;j<n;j++){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                maxLength=max(maxLength, j-i+1);
            }else{
                while(st.count(s[j])){
                    st.erase(s[i]);
                    i++;
                }
                st.insert(s[j]);
            }
        }
        return maxLength;
    }
};