class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=1,maxprofit=0;
        while(right<prices.size())
        {
            int cp=prices[right]-prices[left];
            if(prices[left]<prices[right])
            {
                maxprofit=max(cp,maxprofit);
            }
            else{
                left=right;
            }
            right+=1;
        }
        return maxprofit;
    }
};