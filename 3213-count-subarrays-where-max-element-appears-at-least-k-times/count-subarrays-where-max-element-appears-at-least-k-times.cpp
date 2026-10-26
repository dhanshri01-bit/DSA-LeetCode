class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        long long int i, j, maxi, count,sub_arr, n, msw;
        n = nums.size();
        maxi = *max_element(begin(nums), end(nums));
        count = 0;
        msw = 0;
        i = 0;
        j = 0;
        while(j < n)
        {
            if(nums[j] == maxi)
            {
                count++;
            }

            if(count >= k)
            {
                msw =msw + n - j;
                while(count == k)
                {
                    if(nums[i] == maxi)
                    {
                        count--;
                        i++;
                    }
                    else
                    {
                         msw = msw + n - j;
                        i++;
                    }
                }
                
            }
            j++;
        }
        return msw;
    }
};
                
        