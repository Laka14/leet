class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        int j=0;
        string ans="";
        for(int i =0; i<n; i++){
            if(s[i]=='*') j--;
            else {
                s[j]=s[i];
                j++;
            }

        }
        
        for(int i =0; i<j; i++){
            ans+=s[i]; 
        }

        return ans;
    }
};