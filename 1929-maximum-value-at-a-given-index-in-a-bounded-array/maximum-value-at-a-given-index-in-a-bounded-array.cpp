class Solution {
public:
    int maxValue(int n, int index, int maxSum) {

       long long int i, ans, flag, left_idx,right_idx,left_sum,right_sum,total_sum,low,high,mid;
       ans = 1;
       flag = 1;
       low = 1;
       high = maxSum;


       while(low <= high)
       {
            mid =(low + high) / 2;

            left_idx = index;
            right_idx = n - index - 1;

            if(left_idx < mid)
            {
                left_sum = (long long)(mid - 1) * mid/2 - (mid - left_idx - 1) *  (mid - left_idx)/2;
            }
            else
            {
                left_sum = (long long)(mid - 1) * mid/2 + left_idx - mid + 1;
            }

            if(right_idx < mid)
            {
                right_sum = (long long)(mid - 1) * mid/2 - (mid - right_idx - 1) *  (mid - right_idx)/2;
            }
            else
            {
                right_sum = (long long)(mid - 1) * mid/2 + right_idx - mid+ 1;
            }

            total_sum = left_sum + mid + right_sum;

            if(total_sum <= maxSum)
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