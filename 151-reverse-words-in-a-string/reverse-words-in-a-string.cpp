class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        string ssr="";
        vector<string> v;
        for(int i=0; i<n; i++){
            if(s[i]!=' '){
                ssr+=s[i];
            }
            else {
                if(ssr!="") v.push_back(ssr);
                ssr="";
            }
        }
        if(ssr!="") v.push_back(ssr);
        for(int i =v.size()-1; i>=0; i--){
            ans+=v[i];
            if(i>0) ans+=' ';
        }
        return ans;

    }
};