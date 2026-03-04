class Solution {
public:
    static int minPartitions(string& n) {
        int cnt = 0;

        bool doContinue = true;

        while(doContinue){
            doContinue = false;

            for(auto &i:n){
                if(i >= '1') i-=1, doContinue=true;
            }
            cnt+=1;
        }
        return cnt-1;
    }
};