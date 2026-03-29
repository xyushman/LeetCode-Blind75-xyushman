class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        for(int i=0; i<n; i++){
            if(s1[i]==s2[i]) continue;
            else{
                if(s1[i]==s2[(i+2)%n]) continue;
                else return false;
            }
        }
        return true;
    }
};