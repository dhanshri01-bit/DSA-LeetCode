class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int i, low, high, mid, missing,n;
        n=arr.size();
       

        low = 0;
        high = n -1;

        while(low <= high)
        {
            mid = (low + high)/2;
            missing = arr[mid] - ( mid + 1);

            if(missing == k)
            {
                high = mid - 1;
            }

            else if(missing < k)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        

        return low + k;
    }
};
        