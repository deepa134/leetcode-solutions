class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int count=0;
        unordered_map<int,int> map;
        int prefixxor=0;
        map[0]=1;
        for(auto ch:arr)
        {
           prefixxor^=ch;
           int target=prefixxor^k;
           if(map.find(target)!=map.end())
           {
               count+=map[target];
           }
           map[prefixxor]++;
        }
        return count;
    }
};