class Solution {
public:
    int hammingWeight(int n) {
        int count;
        while(n>0){
            if(n%2==1){
                count++;
            }
            n = n/2;
        }
        return count;
    }
};
