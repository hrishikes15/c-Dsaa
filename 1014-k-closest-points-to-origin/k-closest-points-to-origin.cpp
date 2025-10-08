class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue < pair < int , pair <int,int> >> maxHeap;
        vector<vector<int>> ans;
        int n  = points.size();

        for(int i = 0 ; i < n ; i++){

            int x = points[i][0];
            int y = points[i][1];

            int dist = x * x + y * y;

            maxHeap.push( { dist , { x , y } } );
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        while( !maxHeap.empty() ){
            ans.push_back( { maxHeap.top().second.first , maxHeap.top().second.second } );
            maxHeap.pop();
        }
        return ans;
    }
};