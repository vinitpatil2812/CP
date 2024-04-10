#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

pll help(vector<ll> &v, ll k) {
    if(k == v.size()) {
        return {0, 0};
    }
    
    ll mx = 0;
    ll mn = 1e18;
    ll sum = 0, i = 0;

    for(int i = 0; i < v.size(); i += k) {
        sum = 0;

        for(int j = i; j < i + k && j < v.size(); j++) {
            sum += v[j];
        }

        mn = min(mn, sum);
        mx = max(mx, sum);
    }

    return {mn, mx};
}

void solve() {
    // Your solution code here
    int n;
    cin >> n;

    vector<ll> v(n);
    iv(v);

    // vector<ll> pre(n + 2, 0), suf(n + 2, 0);

    // for(int i = 1; i <= n; i++) {
    //     pre[i] = v[i - 1] + pre[i - 1];
    // }

    // for(int i = n; i >= 1; i--) {
    //     suf[i] = suf[i + 1] + v[i - 1];
    // }

    ll result = 0;

    for(ll i = 1; i * i <= n; i++) {
        if(n % i != 0) {
            continue;
        }

        pll s = help(v, i);
        pll b = help(v, n / i);

        result = max({result, abs(s.second - s.first), abs(b.second - b.first)});

        // cout << i << " -> " << s.second << " and " << s.first << ", ";
        // cout << i << " -> " << b.second << " and " << b.first << endl;
    }

    cout << result << endl; 

    // pv(pre);
    // pv(suf);
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