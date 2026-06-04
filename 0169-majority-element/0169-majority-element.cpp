class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        int count=0;
        res=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==res){
                count++;
            }else if(nums[i]!=res){
                if(count==0){
                    res=nums[i];
                }else{
                    count--;
                }
            }
        }
    return res;
    }
};