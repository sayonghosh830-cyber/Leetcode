class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp , ans ="";
        while(ss>>temp){
            if(ans.empty()){
                ans = temp;
            }
            else{
                ans = temp + " " + ans;
            }
        }
        return ans;
    }
};