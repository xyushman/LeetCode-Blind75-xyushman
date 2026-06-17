class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> mergerArr;

        for(auto &i:nums1) mergerArr.push_back(i);
        for(auto &i:nums2) mergerArr.push_back(i);

        sort(mergerArr.begin(),mergerArr.end());
        int mid = (m+n)/2;
        if((m+n)%2 ==0 ) return (double)(mergerArr[mid]+mergerArr[mid-1])/2;
        else return mergerArr[mid];
    }
};