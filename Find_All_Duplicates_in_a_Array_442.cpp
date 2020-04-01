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
    vector<int> res(n+1,0);
        for(auto n:nums) {
            res[n]++;
    }
    vector<int> ans;
    for(int i=1;i<=n;i++) {
        if(res[i] == 2) {
            ans.push_back(i);
        }
    }
    for(int i=0;i<n;i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}