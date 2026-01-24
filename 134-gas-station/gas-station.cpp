class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum = 0 , costSum = 0;

        

       int currGas = 0;
       int stIdx = 0;

       for(int i = 0 ; i < gas.size() ; i++){
        currGas += gas[i] - cost[i];
        gasSum += gas[i];
        costSum += cost[i];
        if(currGas < 0){
            currGas = 0;
            stIdx = i+1;
        }
       }
       if(costSum > gasSum) return -1;
       return stIdx;
    }
};