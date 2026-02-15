class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length()-1;
        int n = b.length()-1;

        string rs = "";
        int sum =0, carry=0;
        while(m>=0 || n>=0){
            sum = carry;

            if(m>=0){
                sum += a[m] - '0';
                m--;
            }
            if(n>=0){
                sum += b[n] - '0';
                n--;
            }

            rs.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        if(carry) rs.push_back('1');
        reverse(rs.begin(),rs.end());
        return rs;
    }
};