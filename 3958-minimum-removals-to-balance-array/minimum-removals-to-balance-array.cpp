class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        int i, j, max, n, balanced, ans, remove,low,high,mid;
        n = nums.size();

        sort(nums.begin(),nums.end());
        ans = INT_MAX;
        for(i = 0; i < n; i++)
        {
            low = i;
            high = n - 1;
                 
            while(low <= high)
            {
                 mid = (low + high) / 2;
                if(nums[mid] <= (long long)nums[i] * k)
                {
                    if(ans > n - ( mid- i + 1))
                    ans = n - ( mid - i + 1);
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }

        return ans;
    }
};                                                                                                                                                                                                                            