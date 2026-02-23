class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cnt = 0;
        int n = people.size();
        int i = 0;
        int j = n-1;
        while(i <= j){
            cnt++;
            if(people[i]+people[j] <= limit){
                i++;
            }
            j--;
        }
        return cnt;
    }
};