class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int currsum=0;
        unordered_set<int> seen;
        seen.insert(0);
        for(int i=0;i<arr.size();i++)
        {
            currsum+=arr[i];
           if(seen.count(currsum))
            {
                return true;
            }
            seen.insert(currsum);
        }
        return false;
    }
};