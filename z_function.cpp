class Solution{
    public:
       vector<int> search(string text , string pattern){
        vector<int> res;
        int n=pattern.size();
        for(int i=0;i<=text.size()-pattern.size();i++)
        {
          string newel=text.substr(i,n);
          if(newel==pattern)
          {
            res.push_back(i);
          }
        }
    return res;
     }
};

