class Solution {
public:
    bool checkIfPangram(string str) {
        vector<int>arr(26,0);
        int cnt = 0;
        for(char &ch : str){
            int idx = ch-'a';

            if(arr[idx] == 0){
            arr[idx]++;
            cnt++;
            }
        }
        return cnt==26;
    }
};