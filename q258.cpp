class Solution {
public:
    int addd(int num){
        int sum = 0;
        while(num>0){
            sum = sum + (num%10);
            num = num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>9){
            num = addd(num);
        }
        return num;

        
    }
};
