#include<bits/stdc++.h>
using namespace std;

bool finding(vector<int> nums, int start, int end) {
    if(start == end) {
        return true;
    }

    int furthestJump = min(start + nums[start], end);
    for(int nextPosition = start + 1;nextPosition <= furthestJump; nextPosition++) {
        if(finding(nums,nextPosition,end)) {
            return true;;
        }
    }
    return false;
}

int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
    }
    // below gives us TLE..
    cout << finding(nums,0,n-1) << endl;

//     class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> memo(nums.size(),0);
//         memo[memo.size()-1] = 1;
//         return canJumpFromPosition(0,nums,memo,n-1);
//     }
    
//     bool canJumpFromPosition(int position, vector<int> nums, vector<int> & memo, int end) {
//         if(memo[position] != 0) {
//             return memo[position] == 1 ? true : false;
//         }
        
//         int furthestJump = min(position + nums[position], end);
//         for(int nextPosition = position + 1; nextPosition <= furthestJump; nextPosition++) {
//             if(canJumpFromPosition(nextPosition, nums, memo, end)) {
//                 memo[position] = 1;
//                 return true;
//             }
//         }
//         return false;
//     }
// };
    return 0;
}