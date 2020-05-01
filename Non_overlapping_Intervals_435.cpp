#include<bits/stdc++.h>
using namespace std;

struct CustomComparator {
    bool operator() (vector<int> first, vector<int> second) {
        return first[0] > second[0];
    }
};

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> intervals (m, vector<int>(n,0));
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin >> intervals[i][j];
        }
    }
    priority_queue< vector<int>, vector<vector<int>> , CustomComparator> pq;
    for(auto i: intervals){
        pq.push(i);
    }
    int count = 1;
    int lastEnd = inte
    return 0;
}