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
    int check = 4459745;
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0; j<n;j++) {
                if(matrix[i][j] == 0) {
                    for(int l=0;l<n;l++) {
                        if(matrix[i][l] != check && matrix[i][l] != 0) matrix[i][l] = check;
                    }
                    for(int l=0;l<m;l++) {
                        if(matrix[l][j] != check && matrix[l][j] != 0) matrix[l][j] = check;
                    }
                }
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(matrix[i][j] == check) matrix[i][j] = 0;
            }
        }
    }
    
    return 0;
}