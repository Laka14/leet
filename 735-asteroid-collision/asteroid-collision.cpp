class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int j =-1, n= asteroids.size();
        for(int i =0; i<n; i++){
            if(j==-1 || !(asteroids[i]<0 && asteroids[j]>0)){
                j++;
                asteroids[j] = asteroids[i];
            }
            else{
                while(j>=0 && asteroids[j]>0){
                    if(asteroids[j]<abs(asteroids[i])) {
                        j--;
                    }
                    else if(asteroids[j]==abs(asteroids[i])) {
                        j--;
                        asteroids[i]=0;
                        break;
                    }
                    else {
                        asteroids[i]=0;
                        break;
                    }
                }
                if(asteroids[i]!=0) i--;
            }
        }
        vector<int> v;
        for(int i =0; i<=j; i++) v.push_back(asteroids[i]);
        return v;
    }
};