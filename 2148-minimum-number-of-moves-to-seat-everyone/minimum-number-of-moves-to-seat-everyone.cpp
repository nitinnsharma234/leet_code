class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int i =0;
        int ans =0;
        while(i<seats.size() ){
            ans +=abs(students[i]-seats[i]);
            i++;

        }
        return ans ;
    }
};
/*
    1 3 5
    2 4 7
    1+ 1+ 2
    1 4 5 9 
    1 2 3 6
    0 +2 +2 +3
    1 +0 + 3 + 
*/

