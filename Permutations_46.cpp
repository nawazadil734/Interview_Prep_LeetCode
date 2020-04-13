#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int> nums, vector<vector<int>> & res, int l, int r) {
    if(l == r) {
        res.push_back(nums);
    } else {
        for(int i=l;i<=r;i++) {
            if (l != i && nums[l] == nums[i]) continue;
            swap(nums[l], nums[i]);
            permutation(nums, res,l+1, r);
            // swap(nums[l], nums[i]);
        }
    }
}

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    vector<vector<int>> res;
    permutation(nums,res,0,n-1);
    cout << endl;
    for(int i=0;i<res.size();i++) {
        for(int j=0;j<res[i].size();j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}