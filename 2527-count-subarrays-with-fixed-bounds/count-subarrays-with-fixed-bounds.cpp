class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {

        long long int i, n, count, greater_i,smaller_i,RAI,ans,x;
        count = 0;
        n = nums.size();
        ans = 0;
        greater_i = -1;
        smaller_i = -1;
        RAI = -1;

        for(i = 0; i < n; i++)
        {
            if(nums[i] < minK || nums[i] > maxK)
            {
                RAI = i;
            }
            if(nums[i] == minK)
            {
                smaller_i = i;
            }
            if(nums[i] == maxK)
            {
                greater_i = i;
            }
            
            x = min(greater_i, smaller_i);

            if (x > RAI)
            {
                ans = ans + (x - RAI);
            }


        }

        return ans;
        
        
    }
};