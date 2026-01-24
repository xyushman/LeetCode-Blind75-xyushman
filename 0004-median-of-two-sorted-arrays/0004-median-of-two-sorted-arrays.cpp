class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size()>b.size()) return findMedianSortedArrays(b,a);

        int n1=a.size(), n2= b.size();

        int low =0, high =n1;


        while(low<=high){
            int cnt1 = (low+high)/2;
            int cnt2 = (n1+n2+1)/2 - cnt1;

            int l1 = (cnt1 ==0 ) ? INT_MIN : a[cnt1-1];
            int l2 = (cnt2 == 0) ? INT_MIN : b[cnt2-1];

            int r1 = (cnt1 == n1) ? INT_MAX : a[cnt1];
            int r2 = (cnt2 == n2) ? INT_MAX : b[cnt2];

            if(l1<=r2 && l2 <=r1){
                if((n1+n2)%2 == 0) return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }else if(l1>r2){
                high = cnt1-1;
            }else{
                low = cnt1+1;
            }
        }
        return 0.0;
    }
};