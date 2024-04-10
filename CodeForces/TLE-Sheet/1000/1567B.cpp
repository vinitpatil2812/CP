#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    // Your solution code here
    int a, b;
    cin >> a >> b;

    ll xr = 0;

    for(int i = 0; i < a; i++) {
        xr ^= i;
    }

    if(a == 1 && b == 1) {
        cout << 3 << endl;
        return;
    }

    if(xr == b) {
        cout << a << endl;
    }
    else {
        cout << a + 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}