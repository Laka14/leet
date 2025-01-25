class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m= word2.size();
        string ans="";
        int i =0;
        while(ans.size()<n+m){
            if(i<n) ans+=word1[i];
            if(i<m) ans+=word2[i];
            i++;
        }
        return ans;
    }
};