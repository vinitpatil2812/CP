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
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> ans;
    ll prev = l;

    for(int i = 1; i <= n; i++) {
        ll d = prev / i;

        if(prev % i) {
            d++;
        }

        ans.push_back(d * i);
    }

    // pv(ans);

    ll mx = *max_element(all(ans));

    if(mx > r) {
        cout << "NO" << endl;
    } 
    else {
        cout << "YES" << endl;
        pv(ans);
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