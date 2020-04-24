#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int ans;
    ans = n;
    for(int i=n+1;i<=m;i++) {
        ans = ans & i;
    }
    cout << ans << endl;
    return 0;
}