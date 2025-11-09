class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool peek=false;
        bool flag=false;
        if(arr.size()<3) return false;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1]) return false;
            if(arr[i]<arr[i+1])
            {
                peek=true;
                if(flag) return false;
            }
            else if(arr[i]>arr[i+1])
            {
                flag=true;
            }
             
        }
        if(peek==false) return false;
        return flag;
    }
};