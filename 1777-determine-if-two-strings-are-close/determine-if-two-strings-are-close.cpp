class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;

        map<char, int> mp1, mp2;
        for(int i=0; i<word1.size(); i++){
            mp1[word1[i]]++;
        }
        for(int i=0; i<word2.size(); i++){
            mp2[word2[i]]++;
        }
        if(mp1.size()!=mp2.size()) return false;
        map<int, int> mpa, mpb;
        for(auto it : mp1){
            if(mp2[it.first]==0) return false;
            mpa[it.second]++;
        }
        for(auto it: mp2) mpb[it.second]++;

        if(mpb.size()!=mpa.size()) return false;
        for(auto it: mpa){
            if(mpa[it.first]!=mpb[it.first]) return false;
        }
        return true;
    }
};