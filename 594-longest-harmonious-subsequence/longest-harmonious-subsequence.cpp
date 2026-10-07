class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int i, j, long_subsq, max, n;
        n = nums.size();
        sort(nums.begin(),nums.end());
        long_subsq = 0;
        i = 0;
        j = 1;
        while(j < n)
        {
            while(abs(nums[i] - nums[j]) > 1)
            {
                i++;
            }
            if((abs(nums[i] - nums[j]) == 1))
            {
                if( ( (j-i) + 1 ) > long_subsq) 
                {
                    long_subsq = (j-i) + 1;
                }  
            }
            j++;
        }
        return long_subsq;

    }
};