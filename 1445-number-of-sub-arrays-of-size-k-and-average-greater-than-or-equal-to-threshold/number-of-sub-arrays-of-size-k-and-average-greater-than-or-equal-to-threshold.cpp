class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int i,j,start,end,sum,avg,sub_arr,n;
        n = arr.size(); 
        avg = 0;  
        sum=0;
        sub_arr=0;
        for(i = 0; i < k; i++)
        {
            sum = sum + arr[i];
        }
        avg = sum / k;
        if(avg >= threshold)
        {
            sub_arr++;
        }
        j = 0;
        while(i < n)
        {
            start = j;
            end = i;

            sum = (sum - arr[start]) + arr[end];
            avg = sum / k;
            if(avg >= threshold)
            {
                sub_arr++;
            }
            i++;
            j++;
        }
        
        return sub_arr;
        
    }
};