class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerbound(nums,target);
        int up=upperbound(nums,target)-1;
        if(lb<=up && up<nums.size() && nums[lb]==target && nums[up]==target )
        {
            return{lb,up};
        }
        else
        {
            return{-1,-1};
        }
      
       
    }
    int lowerbound(vector<int>& nums,int target)
    {

        int n=nums.size();
        int low=0,high=n-1;int ans=n;
        while(low<=high)
        
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>& nums,int target)
    {
        int n=nums.size();
        int low=0;int high=n-1;int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>target)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};