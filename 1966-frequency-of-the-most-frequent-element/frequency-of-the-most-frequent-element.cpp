class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        long long int i,j,n,count,max_freq,diff,sum,freq,low,high,mid,window_sum;
        n=nums.size();
        max_freq=0;

        sum = 0;             
        vector<long long>prefix;
        for(i = 0; i < n; i++)
        {
            sum = sum + nums[i];
            prefix.push_back(sum);
        }
        sum = 0;
        for(i = n - 1; i >= 0; i--)
        {
            low = 0;
            high = i;
                      
            while(low <= high)
            {
                mid = (low + high)/2;
                window_sum = prefix[i];
                if (i - mid - 1 >= 0) 
                {
                    window_sum = window_sum - prefix[i - mid - 1];
                }
           
                 sum = (long long)nums[i] *(mid+1) - window_sum;             

                if(sum <= k)
                {
                    freq =mid + 1;
                    if(freq > max_freq)
                    {
                        max_freq = freq;
                    }
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            

        }

         return max_freq;      
    }
};