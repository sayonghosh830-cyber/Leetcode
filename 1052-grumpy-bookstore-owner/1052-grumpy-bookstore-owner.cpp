class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int prevloss = 0;
        for(int i = 0; i<minutes ; i++){
            if(grumpy[i]==1) prevloss += customers[i];
        }
        int maxloss = prevloss;
        int maxIdx = 0;
        int i = 1;
        int j = minutes;
        while(j<n){
            int currentloss = prevloss;
            if(grumpy[j]==1) currentloss += customers[j];
            if(grumpy[i-1]==1) currentloss -= customers[i-1];
            if(maxloss<currentloss){
                maxloss = currentloss;
                maxIdx = i;
            }
            prevloss = currentloss;
            i++;
            j++;
        }
        for(int i = maxIdx ; i < maxIdx + minutes ;i++){
            grumpy[i] = 0;
        }
        int sum = 0;
        for(int i = 0; i<n ;i++){
            if(grumpy[i]==0) sum += customers[i];
        }
        return sum;
    }
};