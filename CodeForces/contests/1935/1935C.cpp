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
    int n, l;
    cin >> n >> l;

    vector<pair<ll, ll>> v(n);

    for(int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;

        v[i] = {a, b};
    }

    // cout << endl;
    // cout << endl;
    // cout << endl;

    vector<ll> fpre(n , 0);

    for(int i = 0; i < n; i++) {
        fpre[i] =  v[i].first +  (i > 0 ? fpre[i - 1] : 0);
    }

    vector<ll> spre(n, 0);

    for(int i = 0; i < n - 1; i++) {
        spre[i] = abs(v[i].second - v[i + 1].second) + (i > 0 ? spre[i - 1] : 0);
    }

    spre[n - 1] = n > 1 ? spre[n - 2] : 0;

    ll result = 0;

    for(ll i = 0; i < n; i++) {
        for(ll j = i; j < n; j++) {
            ll fp = fpre[i] - (i > 0 ? fpre[i - 1] : 0) + spre[i] - (i > 0 ? spre[i - 1] : 0);
            ll sp = fpre[j] - (j > 0 ? fpre[j - 1] : 0) + spre[j] - (j > 0 ? spre[j - 1] : 0);

            if(fp + sp <= l) {
                result = max(result, j - i + 1);
            }
        }
    }

    // for(int i = 0; i < n; i++) {
    //     cout << fpre[i] << " " << spre[i] << endl;
    // }

    cout << result << endl;
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