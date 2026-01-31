class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        char s = letters[0];

        for(int i=0; i<n; i++){
            if((int)letters[i]>(int)target){
                s = letters[i];
                break;
            }
        }
        return s;
    }
};