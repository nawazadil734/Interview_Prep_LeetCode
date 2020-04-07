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
    vector<int> :: iterator itr = nums.begin();
    for(int i=0;i<n;i++) {
        if(nums[i] <= 0) {
            nums.erase(itr);
        }
        itr++;
    }
    sort(nums.begin(), nums.end());
    int j = 1;
    for(int i=0;i<n;i++) {
        if(nums[i] == j) {
            j++;
        } else{
            cout << j << endl;
            break;
        }
    }
    return 0;
}