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
    for(int i=0;i<n;i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}