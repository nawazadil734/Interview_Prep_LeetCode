#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> nums,res(n,1);
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    int temp = 1;
    for(int i=0;i<n;i++) {
        res[i] = temp;
        temp = temp * nums[i];
    }
    temp = 1;
    for(int i=n-1;i>=0;i--) {
        res[i] *= temp;
        temp *= nums[i];
    }
    for(int i=0;i<n;i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}