class Solution {
public:
    bool checkPalindrome(int i,string s){
        int n=s.size();
        if(i>=n/2)
            return true;
        if(s[i]!=s[n-i-1])
            return false;
        return checkPalindrome(i+1,s);
    }
    bool isPalindrome(string s) {
        stringstream ss(s);
        string t="";
        for(char ch: s){
            if(isalnum(ch)){
                t+=tolower(ch);
            }
        }
        return checkPalindrome(0,t);
    }
};
