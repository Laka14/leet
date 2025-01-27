class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        int j=0;
        string ans="";
        vector<char> v;
        for(int i =0; i<n; i++){
            if(s[i]=='*') v.pop_back();
            else {
                v.push_back(s[i]);
            }
        }
        
        for(int i =0; i<v.size(); i++){
            ans+=v[i]; 
        }

        return ans;
    }
};