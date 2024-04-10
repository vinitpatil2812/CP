#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n * (n - 1) / 2);
    map<ll, ll> mp;

    for(int i = 0; i < n * (n - 1) / 2; i++) {
        ll x;
        cin >> x;

        v[i] = x;
        mp[x]++;    
    }

    sort(all(v));

    auto j = mp.begin();

    for(int i = 1; i <= n; i++) {
        if(j == mp.end()) {
            cout << (--mp.end())->first << " ";
        } else {
            cout << j->first << " ";
            j->second -= (n - i);

            if(j->second <= 0) {
                j++;
            }
        }
    }
    cout << endl;
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