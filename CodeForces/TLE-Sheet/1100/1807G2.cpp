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

    vector<int> v(n);
    iv(v);

    sort(all(v));

    ll pre = 0;

    if(n == 1) {
        cout << (v[0] == 1 ? "YES" : "NO") << endl;
        return;
    }

    if(v[0] > 1) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 0; i < n - 1; i++) {
        pre += v[i];

        if(v[i + 1] > pre) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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