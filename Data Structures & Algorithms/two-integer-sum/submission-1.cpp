class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>pairs;
        for(int i=0;i<n;i++){
            pairs[nums[i]]=i;
        }
       for(int i=0;i<n;i++){
            int diff=target-nums[i];
            if(pairs.count(diff) && pairs[diff]!=i)
                return {i, pairs[diff]};
       }
       return {};
    }
};
