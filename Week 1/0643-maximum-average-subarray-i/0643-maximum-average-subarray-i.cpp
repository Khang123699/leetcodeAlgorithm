class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum;
        for (int i=0;i<k;i++){
            sum +=nums[i];
        }
        int max_sum=sum;
        for(int i=k;i<nums.size();i++){
            sum=sum+nums[i]-nums[i-k];
            if(sum>max_sum){
                max_sum=sum;
            }
        }
    return static_cast<double> (max_sum)/k;
    }
};