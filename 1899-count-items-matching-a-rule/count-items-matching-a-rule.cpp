class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx;

        if(ruleKey == "type") idx = 0;
        else if(ruleKey == "color") idx = 1;
        else idx = 2;

        auto lambda = [&](vector<string>& item){
            return item[idx] == ruleValue;
        };

        return count_if(items.begin(), items.end(), lambda);
    }
};