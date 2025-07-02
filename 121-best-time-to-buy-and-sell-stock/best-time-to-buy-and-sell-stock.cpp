class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0,cost;
        int mini=prices[0];
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-mini;
            maxProfit=max(maxProfit,cost);
            mini=min(mini,prices[i]);

        }
        return maxProfit;
        
    }
};