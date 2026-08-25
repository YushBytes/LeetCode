class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int left_sum=0;
        int right_sum;
        
        
        for(int i=0;i<=nums.size()-1;i++){
            sum+=nums[i];
        }
        for(int i=0;i<=nums.size()-1;i++){
            right_sum = sum - left_sum - nums[i];
            if(left_sum==right_sum){
                return i;
            }
            left_sum+=nums[i];



        }
        return -1;}
        
};