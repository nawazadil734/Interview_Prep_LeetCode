#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,x;
    cin >> m >> n;
    vector<vector<int>> matrix;
    for(int i=0;i<m;i++) {
        vector<int> temp;
        for(int j=0;j<n;j++) {
            cin >> x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    
    return 0;
}