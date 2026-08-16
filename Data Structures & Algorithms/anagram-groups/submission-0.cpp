class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>groupAnagrams;
        unordered_map<string, vector<string>>mp;
        for(auto x: strs){
            string temp=x;
            sort(x.begin(), x.end());
            mp[x].push_back(temp);
        }
        for(auto x: mp){
            groupAnagrams.push_back(x.second);
        }
        return groupAnagrams;
    }
};
