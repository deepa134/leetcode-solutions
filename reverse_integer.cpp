class Solution {
public:
    int reverse(int x) {
        int num=x;
         long res=0;int rem;
        
        
        while(num!=0)
        {
            rem=num%10;
            res=res*10+rem;
            num=num/10;
        }
        
        if(res<INT_MIN || res>INT_MAX) return 0;
        
        return res;
    }
    
};