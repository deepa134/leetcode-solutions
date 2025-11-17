class Solution {
public:
    vector<int> func(int row)
    {
        vector<int> res;
        res.push_back(1);
        int ans=1;
        for(int col=1;col<row;col++)
        {
            ans*=row-col;
            ans/=col;
            res.push_back(ans);
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
        {
            ans.push_back(func(i+1));
        }
        return ans;
    }
};