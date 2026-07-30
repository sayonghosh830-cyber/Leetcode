class Solution {
public:
    void swap(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
    void nextPermutation(vector<int>& nums) {
       int idx=-1;
       int n=nums.size();
       int j=-1;
       for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
         }
       }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
       }
       reverse(nums.begin()+idx+1,nums.end());
       for(int i=idx+1;i<n;i++){
        if(nums[idx]<nums[i]){
            j=i;
            break;
        }
       }
       swap(nums[idx],nums[j]);
    }
};