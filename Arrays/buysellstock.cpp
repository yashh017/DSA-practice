#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int> prices) {

    int bestbuy = prices[0], maxprofit = 0;

    for(int i = 1;i < prices.size();i++) {                  //complexity = O(n)

        if(prices[i] > bestbuy) {

            maxprofit = max(maxprofit,prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy,prices[i]);
    }
    return maxprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    cout<<"The maximum profit is: "<<maxprofit(prices)<<endl;
}


