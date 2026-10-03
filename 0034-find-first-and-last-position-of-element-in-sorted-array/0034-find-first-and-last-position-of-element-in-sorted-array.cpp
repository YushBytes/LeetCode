class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower=0;
        int higher=nums.size()-1;
        int mid;
        int first=-1;
        int last=-1;
        while(lower<=higher){
            mid=(lower+higher)/2;
            if(nums[mid]==target){
                first=mid;
                higher=mid-1;
                
            }
            else if(target<nums[mid]){
                higher=mid-1;
            }
            else{
                lower=mid+1;
            }

            
        }
        lower = 0;
        higher = nums.size() - 1;
        while(lower<=higher){
            mid=(lower+higher)/2;
            if(nums[mid]==target){
                last=mid;
                lower=mid+1;
            }
            else if(target<nums[mid]){
                higher=mid-1;
            }
            else{
                lower=mid+1;
            }
        }
       return{first,last};
    }
};