class Solution {
public:
    int maxArea(vector<int>& height) {
        int total = 0;
        int st = 0;
        int end = height.size()-1;
        while(st < end){
            int area = min(height[st],height[end]) * (end-st);
            total = max(total,area);

            if(height[st]<height[end]) st++;
            else end--;
        }
        return total;
    }
};