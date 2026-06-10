class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hash1[1001] = {0};
        int hash2[1001] = {0};
        vector<int> ans;
        for(int i = 0; i<nums1.size();i++){
            hash1[nums1[i]] = hash1[nums1[i]] + 1;
        }
        for(int j = 0; j<nums2.size();j++){
            hash2[nums2[j]] = hash2[nums2[j]] + 1;
        }
        for(int k = 0;k<1001;k++){
            if(hash1[k]!= 0 && hash2[k] != 0){
                ans.push_back(k);
            }
        }
        return ans;

    }
};
