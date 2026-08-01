class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        vector<int> v(2,-1);
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==0 ||nums[mid-1]!=target){
                    v[0]=mid;
                    break;
                }
                else hi = mid-1;
            }
            else if(nums[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        lo=0;
        hi=nums.size()-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1||nums[mid+1]!=target){
                    v[1]=mid;
                    break;
                }
                else lo = mid+1;
            }
            else if(nums[mid]<target) lo = mid+1;
            else hi = mid-1;
        }
        return v;
    }
};