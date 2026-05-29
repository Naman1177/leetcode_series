class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]=mpp[nums[i]]+1;
        }
        for (auto const& [key, val] : mpp) {
            if(val>0){
                ans.push_back(key);
            }
        }
        swap(ans,nums);
        return nums.size();
        
    }
};
