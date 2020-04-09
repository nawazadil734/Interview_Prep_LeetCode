#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    if (n == 1) return nums[0];
        int left = 0;
        int right = n-1;
        while(right>left) {
            int mid = left + (right - left)/2;
            if(nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid+1;
            }
        }
    cout << nums[left] << " "; 
    return 0;
}