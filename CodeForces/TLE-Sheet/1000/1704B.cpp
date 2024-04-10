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
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    iv(v);

    int result = 0;
    int mn = v[0], mx = v[0];

    for(int i = 0; i < n; i++) {
        mx = max(mx, v[i]);
        mn = min(mn, v[i]);

        if(mx - mn > 2 * x) {
            mx = v[i];
            mn = v[i];
            result++;
        }

        // mx = max(mx, v[i]);
        // mn = min(mn, v[i]);
    }

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