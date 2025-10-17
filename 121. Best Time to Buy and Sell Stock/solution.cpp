#include <vector>
using namespace std;

// Kadane's Algorithm
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for (int price : prices) {
            if (price < buy) {
                buy = price;
                continue;
            }
            int newProfit = price - buy;
            if (newProfit > profit) {
                profit = newProfit;
            }
        }
        return profit;
    }
};