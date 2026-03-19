class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        for(int i=0;i<s.size();i++){
            if((s[i]>=48 && s[i]<=57) || (s[i]>=97 && s[i]<=122)){
                k += s[i];
            }
            else if(s[i]>=65 && s[i]<=90) k += tolower(s[i]);
        }
        for(int i=0;i<k.length()/2;i++){
            if(k[i]!=k[k.length()-1-i]) return false;
        }
        return true;
    }
};