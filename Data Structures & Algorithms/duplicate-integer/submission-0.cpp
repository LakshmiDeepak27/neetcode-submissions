class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>duplicate;
        for(int i=0;i<n;i++){
            duplicate[nums[i]]++;
        }
        for(auto x: duplicate){
            int freq=x.second;
            if(freq>=2)
                return true;
        }
        return false;
    }
};