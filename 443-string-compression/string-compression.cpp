class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        string s="";
        map<char, int> mp;
        string hh= "";
        for(int i =0;i<n; i++) hh+=chars[i];
        int a=0;
        for(int i=0; i<n;i++){
            mp[hh[i]]++;
            if((i<n-1 && hh[i]!=hh[i+1])|| i==n-1){
                string ss = to_string(mp[hh[i]]);
                s+=hh[i];
                chars[a]=hh[i];
                a++;
                if(mp[hh[i]]>1){
                    for(int j =0; j<ss.size(); j++){
                        chars[a] = ss[j];
                        s+=ss[j];
                        a++;
                    }
                }
                mp[hh[i]]=0;
            }
        }
        while(chars.size()>s.size()) chars.pop_back();

        return s.size();
    }
};