#include<bits/stdc++.h>
using namespace std;

void check(int n) {
    vector<int> nums;
    while(n > 0) {
        int rem = n%10;
        nums.push_back(rem);
        n = n/10;
    }
    if(nums.size() == 1 && nums[0] == 1) {
        cout << true << endl;
        return;
    } else if (nums.size() == 1 && nums[0] != 1) {
        cout << false << endl;
    } else {
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            sum += pow(nums[i],2);
        }
        check(sum);
    }
}

int main() {
    int n;
    cin >> n;
    check(n);
    return 0;
}