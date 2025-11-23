class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int totalbeauty=0;
        int minfreq=INT_MAX;
        int maxfreq=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            vector<int> freq(26,0);
            for(int j=i;j<s.size();j++)
            {
                freq[s[j]-'a']++;
            }
            for(int k=0;k<26;k++)
            {
                if(freq[k]>0)
                {
                    minfreq=min(minfreq,freq[k]);
                    maxfreq=max(maxfreq,freq[k]);
                }
            }
            totalbeauty+=(maxfreq-minfreq);
        }
      return totalbeauty;  
    }
};