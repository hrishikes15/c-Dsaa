class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mapp;
        int maxi = 0;
        int i = 0 , j = 0;
        int n = fruits.size();

        while(j < n){
            mapp[fruits[j]]++;

            if(mapp.size() <= 2){
                maxi = max(maxi , j-i+1);
            }
            else if(mapp.size() > 2){
               
                mapp[fruits[i]]--;
                if(mapp[fruits[i]] == 0){
                mapp.erase(fruits[i]);
                }
                i++;

                }
            j++;
        }
        return maxi;
    }
};