class Solution {
public:
    string reorganizeString(string s) {
        int n  =  s.size();
        unordered_map<char,int> freq;

        for(auto &i:s) freq[i]++;

        priority_queue<pair<int,char>> pq;

        for(auto &i:freq) {
            if(i.second > (n + 1) / 2) {
                    return "";
            }
            pq.push({i.second, i.first});
        }
        string ans="";

        while(!pq.empty()){

            auto first = pq.top();
            pq.pop();

            ans.push_back(first.second);
            first.first--;

            if(!pq.empty()){
                auto second = pq.top();
                pq.pop();

                ans.push_back(second.second);
                second.first--;

                if(second.first>0) pq.push(second);
            }

            if(first.first>0) pq.push(first);
        }
        return ans;
    }
};