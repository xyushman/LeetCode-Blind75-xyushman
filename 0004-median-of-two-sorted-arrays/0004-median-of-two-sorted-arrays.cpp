class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> m;
        int i=0,j=0;

        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                m.push_back(nums1[i]);
                i++;
            }else{
                m.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n1){
            m.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            m.push_back(nums2[j]);
            j++;
        }
        int n = m.size();
        if(n%2==1) return m[n/2];
        else return (m[n/2-1]+m[n/2])/2.0;
    }
};