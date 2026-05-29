class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 1;i< nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums[i-1]=(nums[i-1])*2;
                nums[i]=0;
            }
        }
        int k = 0;
        for(int j = 0;j<nums.size();j++){
            if (nums[j]!= 0){
                int temp = nums[j];
                nums[j]=nums[0+k];
                nums[0+k]=temp;
                k++;
            }
        }
        return nums;
    }
};
