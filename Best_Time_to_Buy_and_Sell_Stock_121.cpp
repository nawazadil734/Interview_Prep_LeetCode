#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> prices;
    for(int i=0;i<n;i++) {
        cin >> x;
        prices.push_back(x);
    }

    if(n == 0) return 0;
    int minEle = prices[0];
    int profit =0;
    for(int i=1;i<n;i++) {
        if(prices[i] < minEle) {
            minEle = prices[i]; 
        }
        if(prices[i] - minEle > 0) {
            profit = max(profit, prices[i] - minEle);
        }
    } 
    cout << profit << endl;
    return 0;
}