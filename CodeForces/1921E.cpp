#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    ll h, w, a, b, c, d;
    cin >> h >> w >> a >> b >> c >> d;

    if(a >= c) {
        cout << "Draw" << endl;
        return;
    }

    if(c - a < abs(d - b)) {
        cout << "Draw" << endl;
        return;
    }

    ll m = c - a - 1;

    if(m % 2 == 0) {
        cout << "Alice" << endl;
    }
    else {
        cout << "Bob" << endl;
    }
}
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}