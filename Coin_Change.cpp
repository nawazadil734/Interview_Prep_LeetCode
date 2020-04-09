#include<bits/stdc++.h>
using namespace std;

int findWays(vector<int> coins, int  coin, int amount) {
    if(amount ==0) {
        return 1;
    }
    if(amount < 0) {
        return 0;
    }
    if(coin <=0 && amount >= 1) {
        return 0;
    }
    return findWays(coins, coin - 1, amount) +findWays(coins, coin, amount - coins[coin-1]); 
}

int main() {
    int n,amount,x;
    cin >> n >> amount;
    vector<int> coins;
    for(int i=0;i<n;i++) {
        cin >> x;
        coins.push_back(x);
    }
    int smalles = INT_MAX;
    cout << findWays(coins, n, amount) << endl;
    return 0;
}