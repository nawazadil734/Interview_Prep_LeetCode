#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,target;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    int fount = 0;
    int l=0,h=n-1;
    while(l<=h) {
        int mid = (l+h)/2;
        int midElement = nums[mid];
        int leftElemet = nums[l];
        int rightElement = nums[h];
        if(midElement == target) {
            fount = 1;
            cout << mid << endl;
            break;
        }
        if(midElement < leftElemet) {
            if(target <= rightElement && target > midElement) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        } else if( midElement > rightElement) {
            if(target >= leftElemet && target < midElement) {
                l = mid - 1;
            } else {
                h = mid + 1;
            }
        } else {
            if(target < midElement) {
                l = mid -1;
            } else {
                h = mid - 1;
            }
        }
    }
    if(fount == 0) {
        cout << -1 << endl;
    }
    return 0;
}