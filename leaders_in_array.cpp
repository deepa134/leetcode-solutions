

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> res;
        int maxele=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]>=maxele)
            {
                res.push_back(arr[i]);
                maxele=arr[i];
            }
        }
        reverse(res.begin(),res.end());
      return res;  
    }
};