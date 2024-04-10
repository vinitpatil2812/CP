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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> v(n);
    iv(v);

    vector<pll> vp(n);

    for(int i = 0; i < n; i++) {
        vp[i] = {v[i], i};
    }

    vector<ll> tk(n);

    ll ans = 0;

    sort(all(vp));

    for(int i = 0; i < n; i++) {
        if(k == 0) {
            break;
        }

        ans += (vp[i].first) * min(k, m);
        tk[vp[i].second] = min(k, m);
        k -= min(m, k);
    }

    // cout << ans << endl;

    ll pre = 0;

    for(int i = 0; i < n; i++) {
        if(tk[i] == 0) {
            continue;
        }

        ans += (pre * tk[i]);
        pre += (tk[i]);
    }

    cout << ans << endl;
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