class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi =0, cnt = 0;
        int n = s.size();
        vector<int> v(n);
        for(int i=0; i<n; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i] == 'o' || s[i]=='u'){
                v[i]++;
            }
        }
        for(int i =0; i<k; i++) cnt+=v[i];
        maxi = cnt;
        for(int i =0; i<n-k; i++){
            cnt-=v[i];
            cnt+=v[k+i];
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};