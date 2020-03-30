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
    // BELOW IS O(N) SPACE AND O(N) TIME
    // unordered_map<int,int> umap;
    //     for(auto n : nums) {
    //         umap[n]++;
    // }
    // for(auto m : umap) {
    //     if (m.second == 1) {
    //         cout << m.first << endl;
    //         return 0;
    //     }
    // }

    // BELOW IS O(N) TIME AND O(1) SPACE
    int ans = nums[0];
    for(int i=1;i<n;i++) {
        ans = ans ^ nums[i];
    }
    cout << ans << endl;
    return 0;
}