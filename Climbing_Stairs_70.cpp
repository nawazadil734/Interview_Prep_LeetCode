#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;    
    return 0;
}