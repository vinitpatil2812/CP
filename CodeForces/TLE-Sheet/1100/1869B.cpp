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
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pll> v(n);

    for(int i = 0 ; i < n; i++) {
        ll x, y;
        cin >> x >> y;

        v[i] = {x, y};
    }

    ll result = llabs(v[a - 1].first - v[b - 1].first) + llabs(v[a - 1].second - v[b - 1].second);

    ll fc = LLONG_MAX / 2, sc = LLONG_MAX / 2;

    for(int i = 0; i < k; i++) {
        // if(i + 1 == a || i + 1 == b) {
        //     continue;
        // }

        fc = min(fc, llabs(v[i].first - v[a - 1].first) + llabs(v[i].second - v[a - 1].second));
        sc = min(sc, llabs(v[i].first - v[b - 1].first) + llabs(v[i].second - v[b - 1].second));
    }

    cout << min(result, fc + sc) << endl;
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