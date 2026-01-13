class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double y = 0.0, totalArea=0.0;
        double mn = INT_MAX, mx = INT_MIN;

        for(auto &i:squares){
            double len = i[2];
            totalArea += len * len;
            mn = min(mn,(double)i[1]);
            mx = max(mx, (double)i[1]+len);
        }

        double t = totalArea/2.0;
        double low = mn, high = mx;

        while(high-low>1e-5){
            double mid = (low+high)/2.0;
            if(areaBelow(mid,squares)<t){
                low= mid;
            }else{
                y = mid;
                high = mid;
            }
        }
        return y;
    }

    double areaBelow(double mid, vector<vector<int>> &squares){
        double area = 0.0;
        for(auto &sq:squares){
            double y = sq[1], len = sq[2];
            if(mid>=y+len) area+=len*len;
            else if(mid>y) area+=len*(mid-y);
        }
        return area;
    }
};