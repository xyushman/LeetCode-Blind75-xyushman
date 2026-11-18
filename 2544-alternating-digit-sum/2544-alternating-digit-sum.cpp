class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int i=0;
        while(n>0){
            int temp = n%10;
            n/=10;
            if(i%2==0) sum+=(temp);
            else sum-=(temp);
            i++;
        }

        if(i%2==0) return 0-sum;
        return sum;


    }
};