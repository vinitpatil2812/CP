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
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    iv(v);

    ll mx = 0, current = 0;

    for(int i = 0; i < n; i++) {
        current += v[i];

        if(current < 0) {
            current = max(v[i], 0LL);
        }

        mx = max(mx, current);
    }

    // cout << mx << endl;


    ll result = accumulate(all(v), 0LL);
    result = (result + mod) % mod;

    while(k--) {
        result = (result + mx + mod) % mod;
        mx = (mx + mx) % mod;
    }

    // cout << (result + mx + mod) % mod << endl;
    // cout << mx << endl;
    cout << result << endl;
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