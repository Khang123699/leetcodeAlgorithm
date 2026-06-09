class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=0;
        long long totalTime=0;
        for (int i:piles){
            right=max(right,i);
        }
        int res=right;
        while(left<=right){
            totalTime=0;
            int eatSpd=left+(right-left)/2;
            for (int i:piles){
                totalTime+=(i + eatSpd - 1) / eatSpd;
            }
            if(totalTime<=h){
                res=eatSpd;
                right=eatSpd-1;
            }else{
                left=eatSpd+1;
            }
        }
    return res;
    }
};