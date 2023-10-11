class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       priority_queue<int, vector<int>, greater<int> > q;
       for(auto x:nums)q.push(x*x);
       int i=0;
       while(!q.empty())
       {
           nums[i++]=q.top();
           q.pop();
       }
       return nums;
    }
};