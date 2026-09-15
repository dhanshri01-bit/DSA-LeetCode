class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        

        int i , j , max_dis, curr_dis, n1, n2;
        n1 = nums1.size();
        n2 = nums2.size();
        curr_dis = INT_MIN;
        max_dis = 0;

        i = 0;
        j = 0;
        while (i < n1 && j < n2) 
        {
            if (nums1[i] <= nums2[j])
            {
                curr_dis = j - i;
                if(curr_dis > max_dis)
                {
                   max_dis = curr_dis;
                }
                j++;
            }
            else 
            {
                i++;
            }
        }
      

        
        // for(i = 0; i < n1; i++)
        // {
        //     for(j = 0; j < n2; j++)
        //     {
        //         if(nums1[i] <= nums2[j])
        //         {
        //             curr_dis = j - i;

        //             if(curr_dis > max_dis)
        //             {
        //                 max_dis = curr_dis;
        //             }
        //         }
        //     }
        // }

        return max_dis;
    }
};