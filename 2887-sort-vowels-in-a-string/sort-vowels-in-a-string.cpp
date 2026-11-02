class Solution {
public:
    string sortVowels(string s) {

       int i, j,n,flag;
       n = s.size();
       vector<int>vowels(10,0);
       for(i = 0; i < n; i++)
       {
            if  (s[i] == 'A') 
            {
                vowels[0]++;
            }
            else if(s[i] == 'E')
            {
                vowels[1]++;
            }
            else if(s[i] == 'I')
            {
                vowels[2]++;
            }
            else if(s[i] == 'O')
            {
                vowels[3]++;
            }
            else if(s[i] == 'U')
            {
                vowels[4]++;
            }
            else if(s[i] == 'a')
            {
                vowels[5]++;
            }
            else if(s[i] == 'e')
            {
                vowels[6]++;
            }
            else if(s[i] == 'i')
            {
                vowels[7]++;
            }
            else if(s[i] == 'o')
            {
                vowels[8]++;
            }
            else if(s[i] == 'u')
            {
                vowels[9]++;
            }
       }

      

       i = 0;
       j = 0;

       while(i < n)
       {
            flag = 0;

            if( (s[i] == 'A') || (s[i] == 'a') || (s[i] == 'E') || (s[i] == 'e') ||
            (s[i] == 'I') || (s[i] == 'i') || (s[i] == 'O') || (s[i] == 'o') || (s[i] == 'U') || (s[i] == 'u') )
            {
                flag = 1;
            }

            if(flag == 1)
            {
                while(j < 10 && vowels[j] == 0)
                {
                    j++;
                }
                if  (j == 0) 
                {
                    s[i] = 'A';
                }
                else if(j == 1)
                {
                    s[i] = 'E';
                }
                else if(j == 2)
                {
                    s[i] = 'I';
                }
                else if(j == 3)
                {
                    s[i] = 'O';
                }
                else if(j == 4)
                {
                    s[i] = 'U';
                }
                else if(j == 5)
                {
                    s[i] = 'a';  
                }
                else if(j == 6)
                {
                    s[i] = 'e';
                }
                else if(j == 7)
                {
                    s[i] = 'i';
                }
                else if(j == 8)
                {
                    s[i] = 'o';
                }
                else if(j == 9)
                {
                    s[i] = 'u';
                }

                vowels[j]--;
            }

            i++;
       }

        return  s;
       
        
    }
};