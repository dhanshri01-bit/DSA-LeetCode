class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        int i, j, n,s,start_w,end_w;
        long long sum;
        if(k == 0)
        {
            return nums;
        }
        n = nums.size();
        s = k + k + 1;
        sum = 0;
        vector<int>avgs(n,-1);
        if( s > n)
        {
            return avgs;
        }
        i = 0;
        j = k*2;
        while(i <= j)
        {
            sum = sum + nums[i];
            i++;
        }
        avgs[k] = sum / s;
        k++;

        i = 1;
        while(j < n-1 )
        {
            start_w = i - 1;
            end_w = j + 1;
            sum = sum - nums[start_w] + nums[end_w];
           

            avgs[k] = sum / s;
            k++;
            i++;
            j++;
        }
    

        return avgs;
    }
};