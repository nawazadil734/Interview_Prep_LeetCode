#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = nums.size();
    vector<int> k(3,0);
    for(auto n: nums) {
        k[n]++;
    }
    int s=0;
    for(int i=0;i<k[0];i++) nums[s++] = 0;
    for(int i=0;i<k[1];i++) nums[s++] = 1;
    for(int i=0;i<k[2];i++) nums[s++] = 2;
    return 0;
}