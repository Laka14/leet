class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> vtt(26,0);
        for(int i =0; i<s.size(); i++){
            v[s[i]-'a']++;
            vtt[t[i]-'a']++;
        }
        for(int i=0; i<26; i++){
            if(v[i]!=vtt[i]){
                return false;
            }
        }
        return true;
    }
};