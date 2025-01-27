class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;

        vector<int> v1(26), v2(26);
        for(int i=0; i<word1.size(); i++){
            v1[word1[i]-'a']++;
        }
        for(int i=0; i<word2.size(); i++){
            v2[word2[i]-'a']++;
        }
        map<int, int> mp1, mp2;
        for(int i =0; i<26; i++) {
            if(min(v1[i], v2[i]) ==0 && max(v1[i], v2[i])>0) return false;
            if(v1[i]) mp1[v1[i]]++;
        }
        for(int i =0; i<26; i++) {if(v2[i]) mp2[v2[i]]++;}
    
        if(mp1.size()!=mp2.size()) return false;
        for(auto it: mp1){
            if(mp1[it.first]!=mp2[it.first]) return false;
        }
        return true;
    }
};