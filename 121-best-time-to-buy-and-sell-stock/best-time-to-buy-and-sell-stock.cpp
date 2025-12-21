class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0;
        int price = INT_MAX;
        for(int i = 0; i < prices.size(); i++){ 
            price = min(price, prices[i]); 
            pro = max(pro, prices[i] - price); //updating profit 
        }
        return pro;
    }
};
