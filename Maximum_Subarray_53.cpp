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
    if(n == 0) return 0;
    int currMax = nums[0];
    int gMax = nums[0];
    for(int i=1;i<n;i++) {
        currMax = max(nums[i], currMax + nums[i]);
        gMax = max(gMax, currMax);
    }
    cout << gMax << endl;
    return 0;
}