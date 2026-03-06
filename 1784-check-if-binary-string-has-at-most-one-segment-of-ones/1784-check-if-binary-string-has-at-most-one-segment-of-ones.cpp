class Solution {
public:
    bool checkOnesSegment(string s) {
        bool ok = false;
        if(s[0]=='1'){
            for(int i=2; i<s.size(); i++){
                if(s[i-1]=='0' && s[i]=='1') return false;
            }
        }
        return true;
        
        // for(int i=1; i<s.size(); i++){
        //     if(s[i-1]=='1' && s[i]=='1'){
        //         return true;
        //     }
        // }
        // return false;
    }
};