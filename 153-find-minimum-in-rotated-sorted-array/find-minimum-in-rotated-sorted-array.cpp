class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int i,mid,low,high,n,min;
        n = nums.size();
        low = 0;
        high = n - 1;
        min = INT_MAX;
        for(i = 0; i < n; i++)
        {
            if(min > nums[i])
            {
                min = nums[i];
            }
        }

        return min;
       

        
        

    }
};