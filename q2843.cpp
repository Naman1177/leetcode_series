class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int aa = 0;
        for (int i=low;i<= high;i++){

            int c = 0;
            
            int ab = 0;
            int n;
            string str = to_string(i);
            n = str.size();
            for(int j = 0;j<(n/2);j++){
                ab = ab + str[j];
            }
            for(int m = n/2;m<n;m++){
                c = c + str[m];
            }
            if(ab==c){
                aa = aa+1;
            }

            
        }
       return aa; 
    }
};
