class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

         vector<string> words;
         string w = "";

         for(int i=0; i<s.size(); i++){
            if(s[i]!=' ') w+=s[i];
            else if(!w.empty()){
                words.push_back(w);
                w = "";
            }
         }
         if(!w.empty()) words.push_back(w);
        reverse(words.begin(),words.end());

        string res = "";
        for(int i=0; i<words.size(); i++){
            res+= words[i];

            if(i<words.size()-1){
                res += " ";
            }
        }        
        return res;
    }
};