class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int min = i;
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] < nums[min]) {
                    min = j;
                }
            }
            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
        }
        int maxn = 0;
        int minn = 0;
        for (int x = 0; x < k; x++) {
            minn = minn + nums[x];
        }
        for (int y = nums.size() - 1; y >= (int)nums.size() - k; y--) {
            maxn = maxn + nums[y];
        }
        return abs(maxn - minn);
    }
};
