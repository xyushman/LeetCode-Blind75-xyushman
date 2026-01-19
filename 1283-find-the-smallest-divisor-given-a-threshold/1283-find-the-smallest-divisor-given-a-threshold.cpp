class Solution {
public:

    int sum(vector<int> a,int d){
        int sum =0; 
        for(int i:a){
            sum+= ceil(double(i)/d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();
        int l = 1;
        int h = *max_element(nums.begin(),nums.end());
                if(n>threshold) return -1;
        while(l<=h){
            int mid = (l+h)/2;

            if(sum(nums,mid)<=threshold) h = mid-1;
            else l = mid+1;
        }
        return l;
    }
};