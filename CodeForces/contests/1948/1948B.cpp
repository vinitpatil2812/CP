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

    int mx = 0;

    for(int i = 0; i < n; i++) {
        if(mx > v[i]) {
            cout << "NO" << endl;
            return;
        }

        if(v[i] >= 10 && v[i] / 10 >= mx && v[i] % 10 >= v[i] / 10) {
            mx = v[i] % 10;
        }
        else {
            mx = max(v[i], mx);
        }
    }

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