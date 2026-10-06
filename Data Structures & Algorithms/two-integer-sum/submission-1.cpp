class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        map<int,int> mpp;
        int n=nums.size();

        for(int i=0;i<n;i++){

            int curr=nums[i];
            int required= target-curr;

            if(mpp.find(required)!=mpp.end()){
                ans.push_back(mpp[required]);
                ans.push_back(i);
                return ans;
            }
            else{ // currently not there
            mpp.insert({curr,i});
            }
        }
        
    }
};
