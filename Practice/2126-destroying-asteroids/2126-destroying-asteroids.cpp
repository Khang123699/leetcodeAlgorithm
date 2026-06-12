class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n=asteroids.size();
        long long totalMass=mass;
        for(int n:asteroids){
            if(totalMass>=n){
                totalMass+=n;
            }else{
                return false;
            }
        }
        return true;
    }
};