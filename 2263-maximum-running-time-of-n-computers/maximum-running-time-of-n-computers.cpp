class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {

        long long i, total, max_time, ans,s,sum,low,high,mid;
        s = batteries.size();
        total = 0;
        for(i = 0; i < s; i++)
        {
            total = total + batteries[i];
        }
        max_time = total /n;
       low = 1;
       high = max_time;
        ans = 0;
        while(low <= high)
        {
            mid = (low + high)/2;
            sum = 0;
            for(i = 0; i < s; i++)
            {
             if(batteries[i] < mid)
             {
                sum = sum + batteries[i];
             }
             else
             {
                sum = sum + mid;
             }
            }

            if(sum >= mid*n)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
           
        }
           
    
        return ans;
    }
};