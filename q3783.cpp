class Solution {
public:
    int mirrorDistance(int n) {
        int aa = n;
        int z = 0;
        int rr = 0;
        while(n>0){
            rr = n%10;
            z = z*10 + rr;
            n = n/10;
        }
        return abs(aa - z);
    }
};
