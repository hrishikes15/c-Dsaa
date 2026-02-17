class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
       vector<string> res;

        for(int hrs = 0 ; hrs < 12 ; hrs++){

            for(int min = 0 ; min < 60 ; min++){
                if(__builtin_popcount(hrs) + __builtin_popcount(min) == turnedOn){

                    string hr = to_string(hrs);
                    string minitues = (min < 10 ? "0" : "") + to_string(min);

                    res.push_back(hr + ":" + minitues);
                }
            }
        }
        return res;
    }
};