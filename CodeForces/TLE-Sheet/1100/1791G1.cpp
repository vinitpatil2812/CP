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
    ll n, c;
    cin >> n >> c;

    vector<ll> v(n);
    iv(v);

    vector<ll> p(n);

    for(int i = 0; i < n; i++) {
        p[i] = v[i] + i + 1;
    }

    sort(all(p));

    ll sum = 0, cnt = 0;

    for(int i = 0; i < n; i++) {
        sum += p[i];

        if(sum > c) {
            break;
        }

        cnt++;
    }

    cout << cnt << endl;
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