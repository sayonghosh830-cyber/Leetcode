class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 0;
        for(int i = 1; i<nums.size();i++){
            if(nums[i]!=nums[a]){
                a++;
                nums[a]=nums[i];
            }
        }
        return a+1;
    }
};