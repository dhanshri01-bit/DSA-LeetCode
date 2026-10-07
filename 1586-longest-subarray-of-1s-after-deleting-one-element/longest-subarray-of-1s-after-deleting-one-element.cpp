class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int i, j, long_sub, n,max_l,count_zeros,count_ones;
        n = nums.size();
        long_sub = 0;
        max_l = 0;
        i = 0;
        j = 0;
        count_zeros = 0;

        while(j < n)
        {
            if(nums[j] == 0)
            {
                count_zeros++;
            }
            while(count_zeros == 2)
            {
                if(nums[i] == 0)
                    {
                        count_zeros --;
                    }
                    i++;
                
            }
            if( (j - i) > long_sub)
            {
                long_sub = j - i;
            }
            j++;
        }

        
        return long_sub;
    }
};