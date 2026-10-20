class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {

        int i, j, ans, n, len,count_T,count_F,ans2;
        n = answerKey.size();
        ans = 0;
        i = 0;
        j = 0;
        count_T = 0;
        count_F = 0;

        while(j < n)
        {
            if (answerKey[j] == 'T')
            {
                count_T++;
            }
            else
            {
                count_F++;
            }

            if (count_T > k && count_F > k) 
            {
                if (answerKey[i] == 'T')
                {
                    count_T--;
                }
                else
                {
                    count_F--;
                }
                i++;
            }
            len = j - i + 1;

            if (ans < len) 
            {
                ans = len;
            }

           j++;
        }

        return ans;
    }
};