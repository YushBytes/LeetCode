class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                if(count>streak){
                streak=count;
                
                }
                count=0;

            }
        
    }
        if(count>streak){
            streak=count;
            
        }
        return streak;
    
    }
};