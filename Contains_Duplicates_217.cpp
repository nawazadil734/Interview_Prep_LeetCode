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
    sort(nums.begin(), nums.end());
    int find = nums[0];
    int check = 0;
    for(int i=1;i<n;i++) {
        if(find == nums[i]) {
            cout << true << endl;
            check = 1;
            return 0;
        } else {
            find = nums[i];
        }
    }
    if(check == 0) {
        cout << false << endl;
    }
    return 0;
}