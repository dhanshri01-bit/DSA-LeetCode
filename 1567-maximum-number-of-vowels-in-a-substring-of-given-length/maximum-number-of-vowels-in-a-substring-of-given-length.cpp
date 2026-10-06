class Solution {
public:
    int maxVowels(string s, int k) {

        int i, j, max_vowels,len,vowel_c;
        max_vowels = INT_MIN;
        vowel_c = 0;
        len = s.size();
        i = 0;
        j = 0;
        // while(j < k)
        // {
        //     if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
        //     {
        //         vowel_c++;
        //     }
        //     j++;
        // }

        // if(vowel_c > max_vowels)
        // {
        //     max_vowels = vowel_c;
        // }

        while(j < len)
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                vowel_c++;
            }
            if( (j - i + 1) == k)
            {
             if(vowel_c > max_vowels)
             {
                max_vowels = vowel_c;
             }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowel_c--;
                
            }
            i++;
            }
            j++;
           
        }
        return max_vowels;
    }
};