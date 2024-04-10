#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    vector<pll> vs(q);

    iv(v);
    
    for(int i = 0; i < q; i++) {
        ll x;
        cin >> x;

        vs[i] = {x, i};
    }

    sort(all(vs));

    ll j = 0;
    ll sum = 0;
    vector<ll> ans(q);

    for(int i = 0; i < q; i++) {
        // int s = v[j] - (j > 0 ? v[j - 1] : 0);

        while(j < n && v[j] <= vs[i].first) {
            sum += v[j]; 
            j++;
        }

        ans[vs[i].second] = sum;
    }

    pv(ans);
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
