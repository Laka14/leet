class Solution {
public:
    string reverseVowels(string s) {
        string vow="";
        int n=s.size();
        for(int i =0; i<n; i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i'|| s[i]=='I'|| s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
                vow+=s[i];
            }
        }
        int j=vow.size()-1;
        for(int i =0; i<n; i++){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i'|| s[i]=='I'|| s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
                s[i] = vow[j];
                j--;
            }
        }
        return s;

    }
};