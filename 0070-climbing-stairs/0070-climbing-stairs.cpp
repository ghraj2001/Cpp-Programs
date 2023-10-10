class Solution {
public:
    int climbStairs(int n) {
        int prev=1;
        int cur=1;
        for(int i=2;i<=n;i++)
        {
            int temp=prev+cur;
            prev=cur;
            cur=temp;
        }
        return cur;
    }
};