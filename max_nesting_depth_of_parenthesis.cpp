class Solution {
public:
    int maxDepth(string s) {
        int balance=0;
        int maxbal=0;
        for(auto ele:s)
        {
            if(ele=='(')
            {
               
                balance++;
                maxbal=max(maxbal,balance);
            }
            else if(ele==')')
            {
                balance--;
            }
        }
        return maxbal;
    }
};