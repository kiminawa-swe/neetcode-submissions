class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProf=0;
        int left=0;
        int right=left+1;

        while(right<prices.size()){

            if(prices[left]<prices[right]){
                int currentProf=prices[right]-prices[left];
                maxProf=max(maxProf,currentProf);
            }
            else{
                //if prices right<prices left
                //means theres a cheaper prices
                left=right;
            }
            right++;
        }
        return maxProf;
    }
};
