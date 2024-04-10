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

    vector<ll> v(n);
    iv(v);

    ll mn = LLONG_MAX;
    bool neg = false;

    for(int i = 0; i < n; i++) {
        if(v[i] < 0) {
            neg = !neg;
        }

        v[i] = abs(v[i]);
        mn = min(mn, v[i]);
    }

    ll total = accumulate(all(v), 0LL);

    if(neg) {
        cout << total - 2 * mn << endl;
    }
    else {
        cout << total << endl;
    }

    
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