class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int s1 = 0;
        int s2 = 0;
        for(int i = 0 ; i < n ; i++){
            if(moves[i] == 'U'){
                s1++;
            }
            else if(moves[i] == 'D'){
                s1--;
            }
            else if(moves[i] == 'L'){
                s2++;
            }
            else{
                s2--;
            }
        }
       if(s1 != 0 || s2 != 0) return false;
        return true;
    }
};