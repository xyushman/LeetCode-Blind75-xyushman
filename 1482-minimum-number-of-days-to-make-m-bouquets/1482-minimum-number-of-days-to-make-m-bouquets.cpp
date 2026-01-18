class Solution {
public:
    bool isTrue(vector<int> b, int d, int m, int k){
        int cnt =0;
        int bq = 0;

        for(int i:b){
            if(i<=d){
                cnt++;

                if(cnt == k){
                    bq++;
                    cnt =0;
                }
            }else{
                cnt =0;
            }
        }
        return bq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long t = 1ll* m*k;

        if(t>bloomDay.size()) return -1;

        int l = *min_element(bloomDay.begin(),bloomDay.end());
        int r = *max_element(bloomDay.begin(),bloomDay.end());


        int ans = -1;

        while(l<=r){
            int mid = l +(r-l)/2;

            if(isTrue(bloomDay,mid,m,k)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }

        return ans;
    }
};