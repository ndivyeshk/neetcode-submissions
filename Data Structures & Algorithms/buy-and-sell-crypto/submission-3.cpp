class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int p=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]<prices[j])
                {
                    int pr=prices[j]-prices[i];
                    p=max(pr,p);
                }
            }
        }
        return p;
    }
};
