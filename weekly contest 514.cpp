class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
    sort(discounts.rbegin(), discounts.rend());
    int mx= min(prices.size(), discounts.size());
    double sum=0;
    for(double i=0; i<mx; i++){

double finalPrice = (prices[i] * (100.0 - discounts[i])) / 100.0;
            sum += finalPrice;

    }
    if(prices.size()>discounts.size()){
        for(int i=mx; i<prices.size(); i++){
sum=sum+prices[i];

        }
    }
  return sum;  }
};
