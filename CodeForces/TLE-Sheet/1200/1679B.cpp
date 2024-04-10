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
    ll n, q;
    cin >> n >> q;

    vector<ll> v(n);
    iv(v);

    ll sum = accumulate(all(v), 0LL);
    map<ll, ll> mp;

    for(int i = 0; i < n; i++) {
        mp[i] = v[i];
    }

    ll prev = 0;

    while(q--) {
        ll typ;
        cin >> typ;

        if(typ == 1) {
            ll idx, value;
            cin >> idx >> value;
            idx--;

            if(mp.find(idx) == mp.end()) {
                mp[idx] = value;
                sum -= prev;
                sum += value;
            }
            else {
                sum -= mp[idx];
                sum += value;
                mp[idx] = value;
            }
            cout << sum << endl;
        }
        else {
            ll x;
            cin >> x;
            prev = x;
            sum = x * n;
            mp.clear();
            cout << x * 1LL * n << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}