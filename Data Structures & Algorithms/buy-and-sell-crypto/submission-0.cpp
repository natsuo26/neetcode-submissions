class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1;
        int n = prices.size();
        int maxProfit=0;
        while(j<n){
            if(prices[i]<prices[j]){
                maxProfit=max(maxProfit,prices[j]-prices[i]);
            }else{
                i=j;
            }
            j++;
        }
        return maxProfit;
    }
};
