class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map<int,int> mapp;
        int i = 0 , j = 0 ;
        int n = arr.size();
        int maxi = 0 ;

        while( j < n ){
            mapp[arr[j]]++;

            if(mapp.size() > 2){
                while(mapp.size() > 2){
                    mapp[arr[i]]--;
                    if(mapp[arr[i]] ==0 ){
                        mapp.erase(arr[i]);
                    }
                    i++;
                }

            }
            maxi = max(maxi , (j-i+1));
            j++;
        }
        return maxi;
    }
};