class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
        char curr='a';
        for(char c:word){
            int diff=abs(c-curr);
            int minStep=min(diff,26-diff);
            time+=minStep+1;
            curr=c;
        }
    return time;
    }
};