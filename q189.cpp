class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());

    }
};



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        int n = nums.size();
        vector<int> temp;
        for(int i = n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for (int j = n - k - 1; j >= 0; j--) {
            nums[j + k] = nums[j];
        }
        for(int z=0;z<k;z++){
            nums[z]=temp[z];
        }

    }
};
