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
    int low = 0;
    int high = n-1;
    int ans = 0,curr = 0;
    while(low < high) {
        curr = min(height[low], height[high]) * (high - low);
        ans = max(curr,ans);
        if(height[low] < height[high]) {
            low++;
        } else{
            high--;
        }
    }
    cout << ans << endl;
    return 0;
}