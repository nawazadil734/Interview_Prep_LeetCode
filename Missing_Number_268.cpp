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
    for(int i=0;i<n;i++) {
        if(nums[i] != i) {
            cout << i << endl;
            break;
        }
    }

    // best Soulion below 

    int exSum = n*(n+1)/2;
        int actSum = 0;
        for(auto n: nums) actSum += n;


        return exSum - actSum;
    // unordered_set<int> uset;
    // for(auto n: nums) uset.insert(n);
    // for(int i=0;i<n;i++) {
    //     if(uset.find(i) == uset.end()) {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    return 0;
}