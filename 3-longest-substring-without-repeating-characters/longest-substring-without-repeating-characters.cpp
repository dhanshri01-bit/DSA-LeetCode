class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int max_len,len,i,j,n,flag;
        vector<int> aux(128,0);
        n = s.size();
        max_len = 0;
        if(n == 1)
        {
            return 1;
        }
        if(n == 0)
        {
            return 0;
        }

        i = 0;
        j = 0;
        
        while(j < n)
        {
            aux[s[j]]++;

            while(aux[s[j]] > 1)
            {
                aux[s[i]]--;
                i++;
            }

            len = j - i + 1;
            if(max_len < len)
            {
                max_len = len;
            }
            j++;
        }
        
        
        return max_len;
        
    }
};