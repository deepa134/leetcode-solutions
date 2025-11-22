class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(auto ch:s)
        {
            map[ch]++;
        }
        priority_queue<pair<int,char>> pq;
    
        for(auto p:map)
        {
            pq.push(make_pair(p.second,p.first));
        }
        s="";
        while(!pq.empty())
        {
            char c=pq.top().second;
            for(int i=0;i<pq.top().first;i++)
            {
                s.push_back(c);
            }
            pq.pop();
        }
        return s;
    }
};