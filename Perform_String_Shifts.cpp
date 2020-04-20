#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin >> n;
    vector<vector<int>> shift;
    string s;
    cin >> s;
    // for(int i=0;i<n;i++) {
    //     vector<int> ans;
    //     cin >> x >> y;
    //     ans.push_back(x);
    //     ans.push_back(y);
    //     shift.push_back(ans);
    // }
     int lcount = 0;
        int rcount = 0;
        for(auto str: shift) {
            if(str[0] == 0) {
                lcount += str[1];
            } else {
                rcount += str[1];
            }
        }
        string s1;
        if((lcount - rcount) == 0) {
            return s;
        } else if((rcount - lcount ) > 0) {
            int move = rcount - lcount;
            s1 = s.substr(n-move,move);
            string s2 = s.substr(0,n-move);
            s1.append(s2); 
        } else {
            int move = lcount - rcount;
            s1 = s.substr(lcount,n-move);
            string s2 = s.substr(0,move);
            s1.append(s2); 
        }
        return s1;
    return 0;
}