#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char x;
    cin >> n;
    vector<char> letters;
    for(int i=0;i<n;i++) {
        cin >> x;
        letters.push_back(x);
    }
    int target;
    cin >> target;
    int check = 0;
    for(auto c: letters) {
        if(c > target) {
            check = 1;
            cout << c << endl;
            break;
        }
    }
    if(check == 0) {
        cout << letters[0] << endl;
    }
    return 0;
}