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
    // Find the intersection point of the two runners.
   int slow = nums[0];
   int fast = nums[0];
   do {
       slow = nums[slow];
       fast = nums[nums[fast]];
   } while(slow != fast);

   int ptr1 = nums[0];
   int ptr2 = fast;
   while(ptr1 != ptr2) {
       ptr1 = nums[ptr1];
       ptr2 = nums[ptr2];
   }
   cout << ptr1 << endl;
    return 0;
}