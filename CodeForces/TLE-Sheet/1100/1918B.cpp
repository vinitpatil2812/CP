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
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    iv(a);
    iv(b);

    vector<vector<ll>> v(n);

    for(int i = 0; i < n; i++) {
        v[i] = {a[i] + b[i], a[i], b[i]};
    }

    sort(all(v));

    for(int i = 0; i < n; i++) {
        cout << v[i][1] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++) {
        cout << v[i][2] << " ";
    }
    cout << endl;
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