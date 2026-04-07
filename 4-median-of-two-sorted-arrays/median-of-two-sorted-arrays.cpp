class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),temp.begin());
        sort(temp.begin(),temp.end());
        int n = temp.size();
        if(n % 2 == 1){
            return (temp[n/2]);
        } 
        else{
            return (temp[n/2] + temp[n/2-1]) / 2.0;
        }
    }
};