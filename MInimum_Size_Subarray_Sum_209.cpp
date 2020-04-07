#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    int s;
    cin >> s;
    int len = 0;
    int ans = 0;
    int res = INT_MAX;
    for(int i=0;i<n;i++) {
        ans += nums[i];
        len++;
        if(ans >= s) {
            res = min(res, len);
            ans += nums[i] - nums[i-len]; 
            len = 0;
        }
    }    
    cout << res << endl;
    return 0;
}