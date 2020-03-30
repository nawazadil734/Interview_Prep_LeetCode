// basic logic is that, which ever number is present
// we make it index negative...
// so which ever index element is not negative
// that index == number is missing

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
    for(int i=0;i<n;i++) {
        int m = abs(nums[i]) - 1; // getting index
        nums[m] = nums[m] > 0 ? -nums[m] : nums[m]; 
    }
    vector<int> res;
    for(int i=0;i<n;i++) {
        if(nums[i] > 0) {
            res.push_back(i+1);
        }
    }
    for(int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}