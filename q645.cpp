class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int hash[10001] = {0};
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = hash[nums[i]] + 1;
        }
        for (int j = 1; j < 10001; j++) {
            if (hash[j] == 2) {
                ans.push_back(j);
            }
        }
        for(int k = 1;k<10001;k++){
           if(hash[k]==0){
            ans.push_back(k);
            break;
           }
        }
        return ans;
    }
};
