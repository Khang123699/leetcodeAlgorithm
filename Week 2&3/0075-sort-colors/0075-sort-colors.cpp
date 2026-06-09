class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_nums[3]={0,0,0};
        std::vector<int> result;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_nums[0]++;
            }else if(nums[i]==1){
                count_nums[1]++;
            }else{
                count_nums[2]++;
            }
        }
        for(int i=1;i<=count_nums[0];i++){
            result.push_back(0);
        }
         for(int i=1;i<=count_nums[1];i++){
            result.push_back(1);
        }
         for(int i=1;i<=count_nums[2];i++){
            result.push_back(2);
        }
    nums=result;
    }
};