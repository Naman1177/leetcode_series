class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int c = nums.size();
        for(int i=0; i<c; i++){
            for(int j=i+1; j<c; j++){
                if (nums[i]+nums[j]==target){
                   return {i,j};
                }
            }
        }
            

        return{};
    }
};
