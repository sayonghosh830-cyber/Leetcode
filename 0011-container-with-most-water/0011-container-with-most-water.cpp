class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        long long a = 0;
        while(i<j){
            long long max_a = (long long)(min(height[i],height[j]))*(long long)(j-i);
            a = max(max_a,a);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return a;
    }
};