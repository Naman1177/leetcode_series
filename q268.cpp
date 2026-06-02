class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int x = nums.size();
        
        for(int i =0;i<x;i++){
            sum = sum+nums[i];
        }

        return ((x*(x+1))/2)-sum;
    }
};
