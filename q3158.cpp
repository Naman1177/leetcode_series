class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int cnt;
        int hash[51]={0};
        for(int i = 0;i<nums.size();i++){
            hash[nums[i]]=hash[nums[i]]+1;
        }
        for (int j=0; j<51;j++){
            if(hash[j]==2){
                cnt ^= j;
            }
        }
        return cnt;
    }
};
