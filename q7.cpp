class Solution {
public:
    int reverse(int x) {
        if (x == 0) {
            return 0;
        }

        long long sum = 0;
        int digit = log10(abs((long long)x));
        int i = 0;

        while (x != 0) {
            int n = x % 10;
            sum = sum*10+n;
            x = x / 10;
            i = i + 1;
        }

        if (x < 0) {
            sum = -sum;
        }

        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }

        return sum;
    }
};


//med
