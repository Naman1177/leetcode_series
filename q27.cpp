//100% in time and 99.2% in memory
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> dex;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!= val){
                dex.push_back(nums[i]);
            }
        }
        swap(nums,dex);
        return nums.size();
    }
};
