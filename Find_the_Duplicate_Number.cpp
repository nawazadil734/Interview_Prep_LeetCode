/**
    You must not modify the array (assume the array is read only).
    You must use only constant, O(1) extra space.
    Your runtime complexity should be less than O(n2).
    There is only one duplicate number in the array, but it could be repeated more than once.
**/

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
    // for(int i=0;i<n;i++) {
    //     if(nums[i] < 1) {
    //         cout << -1 * nums[nums[i]];
    //         break;
    //     } else {
    //         nums[nums[i]] *= -1;
    //     }
    // }
    int tortoise = nums[0];
    int hare = nums[0];
    
    return 0;
}