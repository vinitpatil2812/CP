#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void query(); // Forward declaration

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    iv(a);
    ll l[n], r[n];

    unordered_map<int, int> m;
    m[0] = 1;
    m[n - 1] = -1;
    for (int i = 1; i < n - 1; i++) {
        ll ld = abs(a[i] - a[i - 1]);
        ll rd = abs(a[i] - a[i + 1]);
        m[i] = (ld < rd) ? -1 : 1;
    }

    l[0] = 0;
    for (int i = 1; i < n; i++) {
        l[i] = (m[i] == -1) ? 1 + l[i - 1] : l[i - 1] + abs(a[i] - a[i - 1]);
    }

    r[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        r[i] = (m[i] == 1) ? 1 + r[i + 1] : r[i + 1] + abs(a[i] - a[i + 1]);
    }

    ll q;
    cin >> q;

    while (q--) {
        query();
        ll x, y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << endl;
        } else {
            cout << ((y > x) ? r[x - 1] - r[y - 1] : l[x - 1] - l[y - 1]) << endl;
        }
    }
}

void query() {
    // ll x, y;
    // cin >> x >> y;
    // if (x == y) {
    //     cout << 0 << endl;
    // } else {
    //     cout << ((y > x) ? r[x - 1] - r[y - 1] : l[x - 1] - l[y - 1]) << endl;
    // }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
