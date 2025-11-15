class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int missing=-1;int repeating=-1;
        for(int i=0;i<arr.size();i++)
        {
            int num=abs(arr[i]);
            int index=num-1;
            if(arr[index]<0)
            {
                repeating=num;
            }
            else
            {
                arr[index]=-arr[index];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            {
                missing=i+1;
                break;
            }
        }
        return {repeating,missing};
    }
    
};