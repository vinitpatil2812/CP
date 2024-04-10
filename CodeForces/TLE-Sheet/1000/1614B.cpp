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

    vector<pll> a;

    for(int i = 0; i < n; i++) {
        a.push_back({v[i], i + 1});
    }

    sort(all(a), greater<pll>());

    vector<pll> result;
    ll i = 1, j = -1;
    bool flag = 0;
    ll total = 0;

    result.push_back({0, 0});

    for(auto x : a) {
        if(flag) {
            total += (x.first * abs(i));
            result.push_back({x.second, i++});
        }
        else {
            total += (x.first * abs(j));
            result.push_back({x.second, j--});
        }

        flag = !flag;
    }

    sort(all(result));

    cout << 2 * total << endl;

    for(auto x : result) {
        cout << x.second << " ";
    }
    cout << endl;
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