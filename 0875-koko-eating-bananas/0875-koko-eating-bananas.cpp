class Solution {
public:
    long long cal(vector<int>& a, long long speed){
        long long t = 0;
        for(auto i : a){
            t += (i + speed - 1) / speed; // ceil division
        }
        return t;
    }

    int minEatingSpeed(vector<int>& a, int h) {
        long long l = 1;
        long long high = *max_element(a.begin(), a.end());
        long long ans = high;

        while(l <= high){
            long long mid = l + (high - l) / 2;
            long long t = cal(a, mid);

            if(t <= h){
                ans = mid;       // mid might be the answer
                high = mid - 1;  // try smaller speeds
            } else {
                l = mid + 1;     // need faster speed
            }
        }
        return ans;
    }
};
