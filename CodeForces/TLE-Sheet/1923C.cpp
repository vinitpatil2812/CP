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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    iv(v);

    vector<ll> pre(n, 0);
    vector<ll> a(n, 0);
    pre[0] = v[0];
    a[0] = v[0] == 1 ? 2 : 1;

    for(int i = 1; i < n; i++) {
        pre[i] = v[i] + pre[i - 1];
    }

    for(int i = 1; i < n; i++) {
        a[i] = a[i - 1] + (v[i] == 1 ? 2 : 1);
    }

    while(q--) {
        int l, r;
        cin >> l >> r;

        l--, r--;

        if(l == r) {
            cout << "NO" << endl;
            continue;
        }

        // cout << (r - l + 1)  << endl;

        // if(pre[r] - (l == 0 ? 0 : pre[l - 1]) >= (r - l + 1) + (r - l + 2) / 2) {
        //     cout << "YES" << endl;
        // }
        // else {
        //     cout << "NO" << endl;
        // }
        
        if(pre[r] - (l == 0 ? 0 : pre[l - 1]) >= a[r] - (l == 0 ? 0 : a[l - 1])) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
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