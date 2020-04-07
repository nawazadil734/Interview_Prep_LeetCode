#include<bits/stdc++.h>
using namespace std;
class Compare {
    public:
    bool operator() (int a, int b) {
        return b<a;
    }
};


int main() {
    int n,x;
    cin >> n;
    vector<int> nums;
    priority_queue<int, vector<int>, Compare> pq;
    for(int i=0;i<n;i++) {
        cin >> x;
        nums.push_back(x);
        pq.push(x);
    }
    for(int i=0;i<n;i++) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}