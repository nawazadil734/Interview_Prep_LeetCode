#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int> (n,0));
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> mat[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cout <<  mat[i][j] << " ";
        }
        cout << endl;
    }
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++) {
        for(int j=0;j<=n;j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
        }
    }
    cout << dp[m][n]< endl;
    return 0;
}