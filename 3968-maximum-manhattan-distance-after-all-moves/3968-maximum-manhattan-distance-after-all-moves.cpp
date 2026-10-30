class Solution {
public:
    int maxDistance(string moves) {
        int u=0, r=0, d=0, l=0,w=0;

        for(char c:moves){
            if(c=='U') u++;
            else if(c=='D') d++;
            else if(c=='L') l++;
            else if(c=='R') r++;
            else w++;
        }

        return abs(u-d) + abs(r-l) + w;
    }
};