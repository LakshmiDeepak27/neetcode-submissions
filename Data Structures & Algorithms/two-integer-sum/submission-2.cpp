class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int , int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i] , i});
        }
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int start=0 , end=n-1;
        while(start<end){
            if(arr[start].first+arr[end].first==target){
                int first=arr[start].second;
                int second=arr[end].second;
                if(first>second)
                    return {second,first};
                else
                    return {first,second};

            }
            else if(arr[start].first+arr[end].first<target){
                start++;
            }
            else 
            end--;
        }
        return {};
    }
};
