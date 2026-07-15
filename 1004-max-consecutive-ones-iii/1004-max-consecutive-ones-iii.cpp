class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int flip = 0 , i = 0 , j = 0;
        int MaxLen = INT_MIN , len = INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flip<k){
                    flip++;
                    j++;
                }
                else{
                    len = j-i;
                    MaxLen = max(len,MaxLen);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j-i;
        MaxLen = max(len,MaxLen);
        return MaxLen;
    }
};