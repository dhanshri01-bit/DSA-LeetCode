class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        
        int n1,n2,i,ans,j,dis,curr_min;
        n1 = houses.size();
        n2 = heaters.size();
        ans = 0;
        for(i = 0; i < n1; i++)
        {
            curr_min = INT_MAX;
            for(j = 0; j < n2; j++)
            {
                dis = abs(houses[i] - heaters[j]);
                if(dis < curr_min )
                {
                    curr_min = dis;
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