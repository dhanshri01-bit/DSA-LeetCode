class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int i, low, high, mid, missing,n;
        n=arr.size();
        low = 1;
        high = arr[ n - 1] + k;

        while(low <= high)
        {
            mid = (low + high) / 2;
            missing = 0;

            for(i = 0; i < n; i++)
            {
                if(arr[i] <= mid)
                {
                    missing++;
                }
            }

            missing = mid - missing;

            if(missing < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        
        return low;
    }
};