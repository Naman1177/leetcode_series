class Solution {
public:
    int arrangeCoins(int n) {
        int i =1;
        int count =0;
        while(n>0){
            n = n-i;
            i++;
            count++;
        }
        if(n == 0){
            return count;
        }
        return (count-1);
    }
};
