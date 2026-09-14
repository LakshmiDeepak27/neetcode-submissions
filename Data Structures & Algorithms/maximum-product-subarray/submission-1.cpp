class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int currMax=1;
        int currMin=1;
        int ans=nums[0];
        for(int i=0;i<n;i++){
            int temp=nums[i]*currMax;
            currMax=max({nums[i]*currMax, nums[i]*currMin, nums[i]});
            currMin=min({temp,nums[i]*currMin, nums[i]});
            ans=max(ans,currMax);
        }
        return ans;
    }
};
