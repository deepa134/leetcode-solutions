class Solution {
public:
    int myAtoi(string s) {
        int left=0;
        long long res=0;
        int n=s.size();
        int sign=1;
        while(left<n && s[left]==' ') left++;
        if(left<n && (s[left]=='+' || s[left]=='-'))
        {
            if(s[left]=='-')
                sign=-1;
            left++;
        }
        while(left<n && isdigit(s[left]))
        {
           int digit=s[left]-'0';
           if(res>(long long)INT_MAX/10 || (res==(long long)INT_MAX/10 && digit>INT_MAX%10))
           {
            return sign==1?INT_MAX:INT_MIN;
           }
           res=res*10+digit;
           left++;
        }
        return (int)(sign*res);
          
    }
};