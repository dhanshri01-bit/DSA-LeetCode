class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int i, j, len, ans, n;
        long int c_w_sum, m_w_sum;
        n = nums.size();
        c_w_sum = 0;
        ans = 0;

        i = 0;
        j = 0;
        
        while(j < n)
        {
            c_w_sum = (long)c_w_sum + nums[j];
            m_w_sum = (long) nums[j] * ( j - i + 1);

            if(abs(c_w_sum - m_w_sum) > k)
            {
                c_w_sum = c_w_sum - nums[i];
                i++;
            }
            
            len = (j - i) + 1;
            if(len > ans)
            {
                ans = len;
            }                  
                
            j++;      
        }

        return ans;
       
        
    }
};