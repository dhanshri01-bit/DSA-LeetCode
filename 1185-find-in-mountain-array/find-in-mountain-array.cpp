/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int n, low, high, mid, ans ,peak_p;
        n = mountainArr.length();
        low = 0;
        high = n - 1;
        ans = -1;
      
        while(low < high)
        {
            mid = (low + high)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1))
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            } 
        }

        peak_p = low;
        low = 0;
        high = peak_p;

        while(low <= high)
        {
             mid = (low + high)/2;
             if(mountainArr.get(mid) == target)
             {
                return mid;
             }
             else if(mountainArr.get(mid) < target)
             {
                low = mid + 1;
             }
             else
             {
                high = mid - 1;
             }             
        }

        low = peak_p + 1;
        high = n - 1;

                while(low <= high)
        {
             mid = (low + high)/2;
             if(mountainArr.get(mid) == target)
             {
                return mid;
             }
             else if(mountainArr.get(mid) > target)
             {
                low = mid + 1;
             }
             else
             {
                high = mid - 1;
             }             
        }

        return -1;
    }
};