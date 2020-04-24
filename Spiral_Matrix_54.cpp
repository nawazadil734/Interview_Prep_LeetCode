class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int m = matrix.size();
        int n = m > 0 ? matrix[0].size() : 0;
        reversing(matrix,res,0,0,m,n);
        return res;
    }
    
    void reversing(vector<vector<int>> matrix, vector<int> & res,int i, int j, int m, int n) {
        if(i>=m || j>=n) return;
        for(int p = i;p<n;p++) {
            res.push_back(matrix[i][p]);
        }
        for(int p=i+1;p<m;p++) {
            res.push_back(matrix[p][n-1]);
        }
        if((m-1)!= i) {
            for(int p = n-2;p>=j;p--) {
                res.push_back(matrix[m-1][p]);
            }
        }
        if((n -1) != j) {
            for(int p=m-2;p>i;p--) {
                res.push_back(matrix[p][i]);
            }
        }
        reversing(matrix, res,i+1,j+1,m-1,n-1);
    }
};