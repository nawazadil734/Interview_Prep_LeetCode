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
    unordered_set<int> uset;
    for(auto n:nums) uset.insert(n);
    int final = 0;
    for(auto x: uset) {
        int temp = x;
        int count = 1;
        while(uset.find(temp+1)!= uset.end()) {
            count++;
            temp++;
        }
        final = max(final,count);
    }
    cout << final << endl;
    return 0;
}