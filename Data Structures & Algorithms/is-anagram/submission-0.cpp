class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<char,int>mp;
        if(n!=m)
            return false;
        int count=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[t[i]]--;
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]]!=0)
                return false;
        }
        return true;
    }
};
