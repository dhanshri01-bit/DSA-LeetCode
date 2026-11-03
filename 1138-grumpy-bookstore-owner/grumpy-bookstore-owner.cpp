class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int i, j, satisfied_cus, total_satisfied, n, non_satisfied, sum,flag;
        n = customers.size();
        total_satisfied = 0;
        satisfied_cus = 0;

        for(i = 0; i < n; i++)
        {
            if(grumpy[i] == 0)
            {
                total_satisfied = total_satisfied + customers[i];
            }
        }
       
        for(i = 0; i < n; i++)
        {
            non_satisfied = 0;
            for(j = i; j < n; j++)
            {
                if(j - i + 1 <= minutes)
                {
                    if(grumpy[j] == 1)
                    {
                        non_satisfied += customers[j];
                    }
                }
                
            }
            sum = non_satisfied + total_satisfied;
                if(sum > satisfied_cus)
                {
                    satisfied_cus = sum;
                }
             
        }
        
        return satisfied_cus;
        
    }
};