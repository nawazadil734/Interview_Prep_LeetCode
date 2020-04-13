#include<bits/stdc++.h>
using namespace std;

void letterCasePermutation(string S, vector<string> & res, int start) {
    if(start == S.size()) {
        res.push_back(S);
        return;
    }
    if(S[start] >= '0' && S[start] <= '9') letterCasePermutation(S, res, start+1);
    else if (S[start] >= 'a' && S[start] <= 'z') {
        letterCasePermutation(S, res, start + 1);
        S[start] += 'A' - 'a';
        letterCasePermutation(S, res, start + 1);
    } else if (S[start] >= 'A' && S[start] <= 'Z') {
        letterCasePermutation(S, res, start+1);
        S[start] += 'a' - 'A';
        letterCasePermutation(S, res, start + 1);
    }
}

int main() {
    string S;
    cin >> S;
    vector<string> res;
    letterCasePermutation(S, res, 0);
    for(auto r: res) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}