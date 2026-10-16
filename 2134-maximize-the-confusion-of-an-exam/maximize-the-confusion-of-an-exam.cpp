class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int i, j, ans, n, len,count,ans2;
        n = answerKey.size();
        ans = 0;
        i = 0;
        j = 0;
        count = 0;

        while(j < n)
        {
           if(answerKey[j] == 'F')
           {
              count++;
           }
           if(count > k)
           {
              if(answerKey[i] == 'F')
              {
                 count --;
              }
              i++;
           }
           len = (j - i) + 1;
           if(ans < len)
           {
             ans = len;
           }
           j++;
        }

        
        i = 0;
        j = 0;
        count = 0;

        while(j < n)
        {
           if(answerKey[j] == 'T')
           {
              count++;
           }
           if(count > k)
           {
              if(answerKey[i] == 'T')
              {
                 count--;
              }
              i++;
           }
           len = (j - i) + 1;
           if(ans < len)
           {
             ans = len;
           }
           j++;
        }

        return ans;
    }
};