class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num = prices.size();
        int result = 0;
        int buy = prices[0];

        for(int i=1; i<num; i++)
        {
            buy = min(buy, prices[i]);
            result = max(result, prices[i]-buy);
        }
        return result;
        
    }
};
