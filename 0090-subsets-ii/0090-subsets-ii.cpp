class Solution {
public:
    void helper(vector<int>& nums,vector<int> ans,vector<vector<int>> &finalAns,int i,bool flag){
        sort(nums.begin(),nums.end());
        if(i==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        if(i==nums.size()-1){
            if(flag==true) helper(nums,ans,finalAns,i+1,true);
            ans.push_back(nums[i]);
            helper(nums,ans,finalAns,i+1,true);
            return;
        }
        if(nums[i]==nums[i+1]){
            if(flag==true) helper(nums,ans,finalAns,i+1,true);
            ans.push_back(nums[i]);
            helper(nums,ans,finalAns,i+1,false);
        }
        else{
            if(flag==true) helper(nums,ans,finalAns,i+1,true);
            ans.push_back(nums[i]);
            helper(nums,ans,finalAns,i+1,true);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums,ans,finalAns,0,true);
        return finalAns;
    }
};