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


    // int k;
    // cin >> k;
    // int count = 0;
    // vector<int> sum(n);
    // sum[0] = 0;
    // for(int i=1;i<=n;i++) {
    //     sum[i] = sum[i-1] + nums[i-1];
    // }
    // for(int start = 0;start <nums.size();start++) {
    //     for(int end = start + 1;end<=nums.size();end++) {
    //         if(sum[end] - sum[start] == k) count++;
    //     }
    // }

    /// Without Space

    
















    // unordered_map<int, int> umap;
    // int sum;
    // cin >> sum;
    // int res = 0;
    // int currSum = 0;
    // for(int i=0;i<n;i++) {
    //     currSum += nums[i];
    //     if(currSum == sum) res++;
    //     if(umap.find(currSum - sum) != umap.end()) {
    //         res += umap[currSum - sum];
    //     }
    //     umap[currSum]++;
    // }
    // cout << res << endl;
    return 0;
}