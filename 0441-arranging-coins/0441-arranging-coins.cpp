class Solution {
public:
    int arrangeCoins(int n) {
        long long t = 2*(long long)n;
        long long d = sqrt(4*t+1);
        long long k = (d-1)/2;
        return k;
    }
};