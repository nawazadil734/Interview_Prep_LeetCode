#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,x;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for(int i=0;i<m;i++) {
        cin >> x;
        nums1.push_back(x);
    }
    for(int i=0;i<n;i++) {
        cin >> x;
        nums2.push_back(x);
    }
    int k;
    cin >> k;
    vector<vector<int>> ans;
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(pq.size() < k) {
                pq.push({nums1[i],nums2[j]});
            } else {
                pair<int,int> temp = pq.top();
                if((temp.first + temp.second) > nums1[i] + nums2[j]) {
                    pq.pop();
                    pq.push({nums1[i],nums2[j]});
                }
            }
        }
    }
    cout << "------------------------" << endl;
    for(int i=0;i<=pq.size();i++) {
        pair<int,int> temp = pq.top();
        cout << temp.first << " " << temp.second << endl;
        pq.pop();
    }
    cout << endl;
    return 0;
}