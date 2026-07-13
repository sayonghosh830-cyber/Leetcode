class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m = a.size();
        int n = a[0].size();
        int lo = 0;
        int hi = m*n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(a[mid/n][mid%n]==target) return true;
            else if(a[mid/n][mid%n]>target) hi=mid-1;
            else lo=mid+1;
        }
        return false;
    }
};