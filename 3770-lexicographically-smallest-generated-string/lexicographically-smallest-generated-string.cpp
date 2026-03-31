class Solution {
public:
bool isSame(string &word , string &str2 , int  i , int m){
    for(int j = 0 ; j < m ; j++){
        if(word[i] != str2[j]){
            return false;
        }
        i++;
    }
    return true;
}
    string generateString(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        int N = m+n-1;

        string ans(N ,'$');
        vector<bool>canChange (N , false);
        //processing the 'T's'.....
        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'T'){
                int _i = i;
                
                for(int j = 0 ; j < m ; j++){
                    // ans[i] = str2[j]
                    // ans[i+1] = str2[j+1] ... so onn
                    if(ans[_i]  != '$' && ans[_i] != str2[j]){
                        return "";
                    }

                    ans[_i] = str2[j];
                    _i++;
                }
            }
        }

        //fill remaning spaces with 'a'
        for(int i=0 ; i < N ; i++){
            if(ans[i] == '$'){
                ans[i] = 'a';
                canChange[i] = true;
            }
        }

        //processing F's 

        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'F'){

                if(isSame(ans,str2,i,m)){     // if same we need to make unequall

                    bool changed = false;

                    for(int k = i+m-1 ; k >= i ; k--){
                        if(canChange[k] == true){
                            ans[k] = 'b';
                            changed = true;
                            break;
                        }
                    }

                    if(changed == false){ // i am not able to change
                        return "";
                    }
                }  
            }
        }

        return ans;

    }
};