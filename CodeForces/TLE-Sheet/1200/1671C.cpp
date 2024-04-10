#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    iv(v);

    sort(all(v), greater<int> ());

    ll sum = accumulate(all(v), 0LL);
    ll days = 0;
    ll ans = 0;

    for(int i = 0; i < n; i++) {
        ll csum = sum + (days * i);
        
        if(csum <= x) {
            ll d = (x - csum) / (n - (i));
            days += d;
            ans += (d * (n - i));
        }

        sum -= v[i];
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