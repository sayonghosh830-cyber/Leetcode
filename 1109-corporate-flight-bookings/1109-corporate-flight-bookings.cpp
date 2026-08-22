class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n+2,0);
        for(int i = 0; i < bookings.size(); i++){
            int first = bookings[i][0];
            int last = bookings[i][1];
            int seat = bookings[i][2]; 
            diff[first] += seat;
            diff[last+1] -= seat;
        }
        vector<int> ans(n);
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += diff[i];
            ans[i-1] = sum;
        }
        return ans;
    }
};