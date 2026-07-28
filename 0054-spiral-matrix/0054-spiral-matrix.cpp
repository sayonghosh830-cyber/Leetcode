class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minr = 0;
        int minc = 0;
        int maxr = matrix.size()-1;
        int maxc = matrix[0].size()-1;
        vector<int> v;
        while(minr<=maxr || minc<=maxc){ 
            for(int j=minc;j<=maxc;j++){
                v.push_back(matrix[minr][j]);
            }
            minr++;
            if(minr>maxr || minc>maxc) break;
            for(int i=minr;i<=maxr;i++){
                v.push_back(matrix[i][maxc]);
            }
            maxc--;
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc;j>=minc;j--){
                v.push_back(matrix[maxr][j]);
            }
            maxr--;
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr;i>=minr;i--){
                v.push_back(matrix[i][minc]);
            }
            minc++;
        }
        return v;
    }
};