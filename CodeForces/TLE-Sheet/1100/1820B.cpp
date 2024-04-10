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
    string s;
    cin >> s;

    ll mx = 0, count = 0;
    s += s;

    for(auto c : s) {
        if(c == '1') {
            count++;
        }
        else {
            count = 0;
        }

        mx = max(count, mx);
    }

    if(mx == s.size()) {
        mx /= 2;
        cout << mx * mx << endl;
        return;
    }

    ll side = (mx + 1) / 2;

    if(mx % 2) {
        cout << side * side << endl;
    }
    else {
        cout << side * (side + 1) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}