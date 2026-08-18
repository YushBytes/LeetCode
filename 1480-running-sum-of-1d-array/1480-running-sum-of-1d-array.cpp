class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int total=0;
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
            arr.push_back(total);

        }
        return arr;
        
    }
};