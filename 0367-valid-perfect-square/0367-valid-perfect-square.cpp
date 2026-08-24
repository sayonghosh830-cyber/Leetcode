class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 0;
        int hi = num;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            long long m = (long long)mid;
            long long y = (long long)num;
            if(m*m==y) return true;
            else if(m*m<y) lo = mid+1;
            else hi = mid-1;
        }
        return false;
    }
};