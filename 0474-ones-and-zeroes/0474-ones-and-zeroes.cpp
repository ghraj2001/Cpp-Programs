class Solution {
public:
    int findMaxForm(vector<string>& s, int zeros, int ones) {
        vector<vector<int>>dp(zeros+1,vector<int>(ones+1));
        for(auto x:s)
        {
            int cone=count(x.begin(),x.end(),'1');
            int czero=x.size()-cone;
            for(int i=zeros;i>=czero;i--)
            {
                for(int j=ones;j>=cone;j--)
                {
                    dp[i][j]=max(dp[i][j],1+dp[i-czero][j-cone]);
                }
            }
        }
        return dp[zeros][ones];
    }
};