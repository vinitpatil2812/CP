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
    int n;
    cin >> n;

    vector<ll> v(n);
    iv(v);

    ll g1 = v[0];
    ll g2 = v[1];

    for(int i = 0; i < n; i += 2) {
        g1 = __gcd(g1, v[i]);
    }

    for(int i = 1; i < n; i += 2) {
        g2 = __gcd(g2, v[i]);
    }

    for(int i = 0; i < n; i++) {
        if(g2 && !(i % 2) && !(v[i] % g2)) {
            g2 = 0;
        }

        if(g1 && (i % 2) && !(v[i] % g1)) {
            g1 = 0;
        }
    }

    cout << max(g1, g2) << endl;
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