class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string res = "";

        int l = 0;

        for(char i:s){
            if(i=='('){
                if(l>0) res+=i;
                l++;
            }else if(i==')'){
                l--;
                if(l>0) res+=i;
            }
        }

        return res;

    }
};