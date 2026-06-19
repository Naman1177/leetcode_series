class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                ans.push_back(nums[i]);
            }
        }
        for(int j = 0;j<nums.size();j++){
            if(nums[j]==1){
                ans.push_back(nums[j]);
            }
        }
        for(int k = 0;k<nums.size();k++){
            if(nums[k]==2){
                ans.push_back(nums[k]);
            }
        }
        nums = ans;
    }
};
