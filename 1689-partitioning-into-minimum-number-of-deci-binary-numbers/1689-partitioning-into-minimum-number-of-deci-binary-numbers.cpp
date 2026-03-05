class Solution {
public:
    int minPartitions(string n) {
        vector<int> digits;

        for(auto c:n){
            digits.push_back(c-'0');
        }
        int cnt=0;
        while(true){
            bool allZero = true;
            for(int i=0; i<digits.size(); i++){
                if(digits[i]>0){
                    digits[i]--;
                    allZero=false;
                }
            }
            if(allZero) break;
            cnt++;
        }
        return cnt;
    }
};