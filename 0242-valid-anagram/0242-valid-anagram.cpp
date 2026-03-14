class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> mp;
        for(char c:s) mp[c]++;
        for(char k:t){
            if(mp.find(k)!=mp.end()){
                mp[k]--;
                if(mp[k]==0) mp.erase(k);
            }
            else return false;
        }
        if(mp.size()>0) return false;
        return true;
    }
};