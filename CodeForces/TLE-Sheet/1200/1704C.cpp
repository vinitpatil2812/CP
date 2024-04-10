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
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    iv(v);

    sort(all(v));

    vector<int> d;

    for(int i = 0; i + 1 < m; i++) {
        d.push_back(v[i + 1] - v[i] - 1);
        // cout << d.back() << " ";
    }

    d.push_back(n - v[m - 1] + v[0] - 1);
    // cout << d.back() << " ";

    sort(all(d), greater<int> ());

    int p = 0, ui = 0;

    for(int i = 0; i < d.size(); i++) {
        d[i] -= p * 2;

        if(d[i] <= 0) {
            break;
        }

        ui += max(d[i] - 1, 1);

        p += min(2, d[i] );
    }

    // pv(d);

    cout << n - ui << endl;
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