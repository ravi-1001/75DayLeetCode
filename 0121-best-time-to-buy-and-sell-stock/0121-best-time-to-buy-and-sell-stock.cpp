class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int minimum = prices[0];
        int profit = 0;

        for(int i = 0; i< prices.size();i++)
        {
            if (prices[i] < minimum)
            {
                minimum =prices[i];
            }
            
            int todayProfit = prices[i] - minimum;

            if (todayProfit > profit)
            {
                profit = todayProfit;
            }
        }

        return profit;
        
    }
};