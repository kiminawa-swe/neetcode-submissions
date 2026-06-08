class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_profit=0;

        for(int i=0;i<prices.size();i++){
            int buy=prices[i]; // start with first number of the array

            for(int j=1+i;j<prices.size();j++){
                int sell=prices[j];
                int profit=sell-buy;
                max_profit=max(max_profit,profit);
            }
        }
        return max_profit;


        
        
    }
};
