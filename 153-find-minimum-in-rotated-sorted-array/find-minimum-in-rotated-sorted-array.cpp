class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int i,mid,low,high,n,min;
        n = nums.size();
        low = 0;
        high = n - 1;
        min = INT_MAX;
        while(low < high)
        {
            mid = (low + high)/2;
            if(nums[mid] >= nums[high] )
            {
                low = mid + 1;              
            }
            else
            {
                high = mid;
            }
            
        }

        return nums[low];  

    }
};