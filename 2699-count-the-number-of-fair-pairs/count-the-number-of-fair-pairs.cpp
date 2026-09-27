class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        long long int i, j, count, n, count2, low, high,mid,idx1,idx2;
        n = nums.size();
        count = 0;
        sort(nums.begin(),nums.end());
        for(i = 0; i < n; i++)
        {
            idx1 = -1;
            low = i + 1;
            high = n - 1;
            while(low <= high)
            {
                mid = (low + high)/2;
              if(nums[i] + nums[mid] >= lower)
                {
                    idx1 = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            low = i + 1;
            high = n - 1;
            idx2 = -1;
            while(low <= high)
            {
                mid = (low + high)/2;
                if(nums[i] + nums[mid] <= upper)
                {
                    idx2 = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            if(idx1 != -1 && idx2 != -1)
            {
                count += (idx2 - idx1) + 1;
            }

        }
        

        return count;
        
    }
};