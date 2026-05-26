class Solution {
public:
    int countEven(int num) {
        int x = 0;
        for (int i=1;i<=num;i++){
            string str = to_string(i);
            int sum=0;
            for(int j = 0;j<str.length();j++){
                sum = sum+str[j];
            }
            if(sum%2==0){
                x = x+1;
            }
        }
        return x;
    }
};
