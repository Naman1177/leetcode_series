class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(int i = (columnTitle.size()-1);i>=0;i--){
            ans = ans + (((int)((columnTitle[i])) - 64 )* pow(26, (columnTitle.size()-i-1)));

        }
        return ans;
    }
};
