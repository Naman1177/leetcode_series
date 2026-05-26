class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c = 0; 
        int n = heights.size();
        vector<int> sortedh = heights; 
        sort(sortedh.begin(), sortedh.end()); 
        for (int i = 0; i < n; i++) {
            if (heights[i] != sortedh[i]) {
                c = c + 1;
            }
        }
        return c;
    }
};
