#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> height;
    for(int i=0;i<n;i++) {
        cin>> x;
        height.push_back(x);
    }
    int res = 0;
    int left[n],right[n];
    left[0] = height[0];
    right[n-1] = height[n-1];
    cout << left[0] << " ";
    for(int i=1;i<n;i++) {
        left[i] = max(left[i-1], height[i]);
        cout << left[i] << " ";
    }
    cout << endl;
    for(int i=n-2;i>=0;i--) {
        right[i] = max(right[i+1], height[i]);
    }
    for(int i=0;i<n;i++) {
        res += min(left[i], right[i]) - height[i];
    }
    cout << res << endl;
    return 0;
}