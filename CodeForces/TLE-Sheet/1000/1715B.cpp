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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<ll> result(n, 0);

    if(k * b > s) {
        cout << -1 << endl;
        return;
    }

    result[0] = k * b + min(s - k * b, k - 1);
    s -= result[0];

    for(int i = 1; i < n; i++) {
        result[i] = s <= 0 ? 0 : min(s, k - 1);
        s -= result[i];
    }

    if(s > 0) {
        cout << -1 << endl;
    }
    else {
        pv(result);
    }
    // pv(result);

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