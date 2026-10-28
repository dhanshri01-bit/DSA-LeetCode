class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int max_len,count,i,j,n,flag;
        n = s.size();
        max_len = 1;
        if(n == 1)
        {
            return 1;
        }
        if(n == 0)
        {
            return 0;
        }
        
        for(i = 0; i < n; i++)
        {
            vector<int> aux(128,0);
            count = 0;
            flag = 1;

            for(j = i; j < n && flag == 1; j++)
            {
                if(aux[s[j]] == 1)
                {
                    flag = 0;
                }
                else
                {
                    aux[s[j]] = 1;
                    count++;
                    max_len = max(max_len, count);
                }
            }
        }
        return max_len;
        
    }
};