class Solution {
public:
    int characterReplacement(string s, int k) {

       int i, j, long_subarr, len,n, count;
       int ch;
       n = s.size();
       long_subarr = 0;
       

       for(ch = 'A'; ch <= 'Z'; ch++)
       {
            count = 0;
            j = 0;
            i = 0;
            while(j < n)
            {
                if(ch != s[j])
                {
                    count++;
                }
                if(count > k)
                {
                    if(ch != s[i])
                    {
                        count--;
                    }
                    i++;
                }
                len = (j - i) + 1;
                if(long_subarr < len)
                {
                    long_subarr = len;
                }
                j++;
                
            }
            
       }
       return long_subarr;


       

        
        
    }
};