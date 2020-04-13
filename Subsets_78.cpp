#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> nums,vector<int> & ans, vector<vector<int>> & res, int start) {
    res.push_back(ans);
    for(int i=start; i<nums.size();i++) {
        ans.push_back(nums[i]);
        subsets(nums,ans,res,i+1);
        ans.pop_back();
    }
    return;
}

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    vector<int> ans;
    vector<vector<int>> res;
    subsets(nums,ans,res,0);
    for(int i=0;i<res.size();i++) {
        for(int j=0;j<res[i].size();j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}