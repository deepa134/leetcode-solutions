class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rowflag(matrix.size(),0);
        vector<int> columnflag(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    rowflag[i]=1;
                    columnflag[j]=1;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(rowflag[i]==1 || columnflag[j]==1)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};