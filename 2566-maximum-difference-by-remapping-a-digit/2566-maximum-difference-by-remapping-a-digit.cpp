class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string mx = s;

        for(auto c:s){
            if(c!='9'){
                replace(mx.begin(),mx.end(),c,'9');
                break;
            }
        }

        string mn = s;
        char first = s[0];

        replace(mn.begin(),mn.end(),first,'0');

        // Convert back to integers and return the difference
        return stoi(mx) - stoi(mn);

    }
};