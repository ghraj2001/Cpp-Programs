class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            int k=target-nums[i];
            if(mp.find(k)!=mp.end() and mp[k]!=i)
            {
                ans.push_back(i);
                ans.push_back(mp[k]);
                break;
            }
        }
        return ans;
    }
};