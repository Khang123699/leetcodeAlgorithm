class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies=0;
        for(int candy:candies){
            if(candy>max_candies){
                max_candies=candy;
            }
        }
        std::vector<bool> result;
        for(int candy:candies){
            if ((candy+extraCandies)>=max_candies){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};