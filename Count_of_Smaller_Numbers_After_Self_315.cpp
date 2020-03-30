#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> nums,res(n,0);
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    for(int i=n-2;i>=0;i--) {
        for(int j=i+1;j<n;j++) {
            if(nums[i] > nums[j]) {
                res[i] = res[j] + 1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}