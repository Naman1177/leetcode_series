class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index =0;
        int largenum = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>largenum){
                largenum = nums[i];
                index = i;
            }

        }
        for(int j = 0;j<nums.size();j++){
            if(j != index && largenum<(2*nums[j])){
                return -1;
            }
        }
        return index;
    }
};
