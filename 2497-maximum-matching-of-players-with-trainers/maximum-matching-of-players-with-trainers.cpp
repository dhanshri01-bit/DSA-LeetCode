class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {

        int i , j , max_matches, n1, n2, matches;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        n1 = players.size();
        n2 = trainers.size();
        max_matches = 0;

        i = 0;
        j = 0;
        matches = 0;
        while(i < n1 && j < n2)
        {
            if(players[i] <= trainers[j])
            {
                matches++;
                i++;
                j++; 

            }
            else
            {
                j++;   
            }
        }

        return matches;
     }
};