class Solution {
public:
    bool checkIfPangram(string str) {
        vector<int>arr(26,0);

        for(char &ch : str){
            int idx = ch-'a';
            arr[idx]++;
        }
        for(int &count : arr){
            if(count == 0) return false;
        }

        return true;
    }
};