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

    int p = v[0] - 1, f = 0;
    int ans = 0;

    for(int i = 0; i < n;) {
        int cf = 0;
        int cp = v[i];

        while(v[i] == cp) {
            i++;
            cf++;
        }

        if(cp != p + 1) {
            ans += cf;
            p = cf;
            p = cp;
            continue;
        }

        // ans += abs(cf - f);
        if(cf > f) {
            ans += (cf - f);
        }
        f = min(cf, f);
        p = cp;
    }

    cout << ans << endl;
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