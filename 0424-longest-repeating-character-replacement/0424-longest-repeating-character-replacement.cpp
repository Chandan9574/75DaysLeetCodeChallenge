class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()==0) return 0;
        vector<int> arr(128,0);
        int i=0, maxLength=0;
        for(int j=0;j<s.size();j++){
            maxLength=max(maxLength, ++arr[s[j]]);
            if(j-i+1-maxLength>k) arr[s[i++]]--;
        }
        return s.length()-i;
    }
};