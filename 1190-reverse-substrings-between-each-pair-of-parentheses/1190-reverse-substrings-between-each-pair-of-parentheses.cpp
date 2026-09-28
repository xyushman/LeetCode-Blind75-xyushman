class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<string> st;

        string t = "";

        for(auto &i:s){
            if(i=='('){
                st.push(t);
                t="";
            }
            else if(i==')'){
                reverse(t.begin(),t.end());
                t = st.top()+t;
                st.pop();
            }
            else t+=i;
        }
        // reverse(t.begin(),t.end());
        return t;
    }
};