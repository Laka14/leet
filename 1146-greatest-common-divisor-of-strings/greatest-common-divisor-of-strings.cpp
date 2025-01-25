class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1) return "";

        string ans=""; int n=str1.size(), m = str2.size();
    
        int gg=gcd(n,m);
        for(int i=0; i<gg; i++) ans+=str1[i];
        return ans;
    }
};