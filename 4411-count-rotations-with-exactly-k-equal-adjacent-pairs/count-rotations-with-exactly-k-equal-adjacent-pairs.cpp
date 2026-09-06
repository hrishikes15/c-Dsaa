class Solution {
public:
    int countRotations(string s, int k) {
        int n =s.size();
        int c=0;
        for( int i =0 ; i<n;i++){
            if(s[i]==s[(i+1)%n]){
                c++;
            }
        }
        if(k==c){
            return n-c;
        }
        else if(k==c-1){
            return c;
            
        }
        else{
            return 0;
        }
        
    }
};