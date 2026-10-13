class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m,n,high,low,mid,r1,r2,l1,l2,lh,rh,c1,c2; 
        double for_left, for_right;     
        m=nums1.size();
        n=nums2.size();
       if (m > n) 
       {
         return findMedianSortedArrays(nums2, nums1);
       }

        lh = (m + n + 1) / 2;
        rh = (m + n) / 2;
        low = 0;
        high = m;

        while(low <= high)
        {
            mid = (low + high)/2;
            c1 = mid;
            c2 = lh - c1;

            if(c1 == 0)
            {
                l1= INT_MIN;
            }
            else
            {
                l1 = nums1[c1 - 1];
            }

            if(c2 == 0)
            {
                l2 = INT_MIN;
            }
            else
            {
                l2 = nums2[c2 - 1];
            }

            if(c1 == m)
            {
                r1 = INT_MAX;
            }
            else
            {
                r1 = nums1[c1];
            }

            if(c2 == n)
            {
                r2 = INT_MAX;
            }
            else
            {
                r2 = nums2[c2];
            }

            if(l1 <= r2 &&  l2 <= r1)
            {             
                if( (m + n)%2 == 0)
                {
                    for_left = max(l1 , l2);
                    for_right = min(r1 , r2);
                    return (double)(for_right + for_left)/2.0;
                }
                else
                {
                    for_left = max(l1 , l2);
                    for_right = min(r1 , r2);
                    return for_left;
                }
            }
            else if( l1 > l2)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
    
        }
        return -1;
    }
};

