class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> v;
        for(int i=0;i<=rowIndex;i++){
            vector<int>row(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    row[j]=1;
                }
                else{
                    row[j]=v[i-1][j]+v[i-1][j-1];
                }
            }v.push_back(row);
        }return v[rowIndex];
    }
};