#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }   
    int find = INT_MAX;
    for(auto n: nums) {
        if(find > n && n>0) {
            find = n;
        }
    }
    int check = 1;

    for(int )
    cout << find << endl;
    return 0;
}