#include<bits/stdc++.h>
using namespace std;

int search(vector<int> nums, int l, int h, int target) {
    if(l>h) return -1;

    int mid = (l+h)/2;
    if(nums[mid] == target) return mid;

    // if nums[l ... mid] is sorted 
    if(nums[l] <= nums[mid]) {
        if(target >= nums[l] && target <= nums[mid])
            return search(nums, l, mid -1, target);
        return search(nums, mid + 1, h, target);
    }
    // if nums[l... mid] first subarray is not soretd..
    // then nums[mid ... h] must be sorted..

    if(target >= nums[mid] && target <= nums[h]) {
        return search(nums,mid + 1, h, target);
    }
    return search(nums, l, mid-1, target);
}

int main() {
    int n,x,target;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    // int ans = search(nums, 0,n-1,target);
    // if(ans != -1) {
    //     cout << ans << endl;
    // } else {
    //     cout << -1 << endl;
    // }

    int l = 0,h=n-1;
    while(l<=h) {
        int mid = (l+h)/2;
        int midElement = nums[mid];
        int currLeft = nums[l];
        int currRight = nums[h];
        // if target found, return the index
        if(midElement == target) {
            return mid;
        }
        // if middle element is less than the current left
        if(midElement < currLeft) {
            if(target<=currRight && target> midElement) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        } else if(midElement > currRight) {
            if(target >= currLeft && target < midElement) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            // here it is no rotation 
            if(target > midElement) l = mid + 1;
            else {
                h = mid - 1;
            }
        }
        return -1;
    }
    return 0;
}