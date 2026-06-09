class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        int j=0;
            for(int i=0;i<nums.size();i++){
                if(i==nums[i]){
                    j=i;
            }else{
                return i;
            }
        }
    return j+1;
    }
};