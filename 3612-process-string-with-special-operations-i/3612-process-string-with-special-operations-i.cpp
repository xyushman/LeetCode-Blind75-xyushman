class Solution {
public:
    string processStr(string s) {
        string t="";

        for(auto &i:s){
            if(i=='*'){
                if(!t.empty()) t.pop_back();
            }else if(i=='#'){
                t+=t;
            }else if(i=='%'){
                reverse(t.begin(),t.end());
            }else{
                t+=i;
            }
        }
        return t;
    }
};