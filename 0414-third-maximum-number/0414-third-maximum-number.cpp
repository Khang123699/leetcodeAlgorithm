class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int result=0;
        std::sort(nums.begin(),nums.end());
        std::vector<int> numSort;
        numSort.push_back(nums[0]);
        for (int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                numSort.push_back(nums[i]);
            }
        }
        if (numSort.size()>2){
            result=numSort[numSort.size()-3];
        }else{
            result=numSort.back();
        }
    return result;
    }
};