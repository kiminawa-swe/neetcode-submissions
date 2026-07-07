class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left=0;
        int right=left+1;
        int maxProf=0;

        while(right<prices.size()){

            if(prices[left]<prices[right]){
                int currentProf=prices[right]-prices[left];
                maxProf=max(maxProf,currentProf);
            }
            else{
                //if there a cheaper prices to buy (prices[right]<prices[left])
                left=right;
            }

            right++; //move right to the right 
        }

        return maxProf;

    }
};
