class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        string str2 = str;

        int idx = str.find_first_not_of('9');

        if(idx != string :: npos){
            char ch = str[idx];                                 //maxnumber
            replace(begin(str),end(str),ch,'9');
        }

        // minium 
        char ch = str2[0];
        replace(begin(str2),end(str2) , ch , '0');

        return stoi(str) - stoi(str2);
    }
};