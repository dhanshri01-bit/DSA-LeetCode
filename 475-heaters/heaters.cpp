class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        int n1,n2,i,ans,j,dis,curr_min,low,high,mid;
        sort(heaters.begin(),heaters.end());
        n1 = houses.size();
        n2 = heaters.size();
        ans = 0;
        for(i = 0; i < n1; i++)
        {
            low = 0;
            high = n2 - 1;
            curr_min = INT_MAX;
            while(low <= high)
            {
                mid = (low + high)/2;
                dis = abs(houses[i] - heaters[mid]);
                if(dis < curr_min )
                {
                    curr_min = dis;
                }
                if(heaters[mid] < houses[i])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }              
            }
             if(curr_min > ans)
            {
                ans = curr_min;
            }
        }
        return ans;

    }
};