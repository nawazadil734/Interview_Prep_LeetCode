#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        cin >> x;
        arr.push_back(x);
    }
    unordered_set<int> uset;
    for(auto a: arr) {
        uset.insert(a);
    }
    int count = 0;
    for(int i=0;i<n;i++) {
        if(uset.find(arr[i]+1) != uset.end()) {
            count++;
        }
    }
    cout << count << endl;
}