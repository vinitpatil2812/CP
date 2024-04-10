#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    vector<ll> x(n);

    vector<pll> a(n);

    iv(v);
    iv(x);

    for(int i = 0; i < n; i++) {
        a[i] = {abs(x[i]), v[i]};
    }

    sort(all(a));

    ll count = 0;
    ll sec = 0;

    ll i = 0;

    while(i < n) {
        sec++;
        count += k;

        while(i < n && a[i].first == sec) {
            count -= a[i].second;
            // cout << count << " ";
            i++;
        }

        if(count < 0) {
            cout << "NO" << endl;
            return;
        }
    }

    // cout << count << endl;
    cout << "YES" << endl;
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
