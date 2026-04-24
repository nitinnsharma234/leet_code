class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        

        int count =0; 
        int l =0,r=0;
        for (int i =0;i<moves.size();i++){
            if (moves[i]=='_'){
                count ++;
            }
            else if (moves[i]=='R'){
                r++;
            }
            else{
                l++;
            }
        }




        return abs(l-r)+count;
    }
};