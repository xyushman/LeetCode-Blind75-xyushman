class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {


        int mn = INT_MAX;
        for(int i=0; i<landStartTime.size(); i++){
            for(int j=0; j<waterStartTime.size(); j++){
                int lf = landStartTime[i]+landDuration[i];

                int wt = max(lf,waterStartTime[j]);

                int ft = wt+waterDuration[j];


                int waterFinish = waterStartTime[j] + waterDuration[j];
                int landStart = max(waterFinish, landStartTime[i]);
                int ft2 = landStart + landDuration[i];
                mn = min({mn,ft,ft2});
            }
        }
        return mn;
    }
};