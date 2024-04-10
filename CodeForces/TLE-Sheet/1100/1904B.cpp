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

    ll sum = accumulate(all(v), 0LL);

    map<int, int> mp;

    vector<int> a = v;

    sort(all(a));
    bool c = false;
    ll prev = 0;

    for(int i = n - 1; i >= 0; i--) {
        sum -= a[i];

        if(c) {
            mp[a[i]] = prev;
            // prev = i;
        }
        else {
            mp[a[i]] = i;
            prev = i;
        }

        if(sum >= a[i]) {
            c = true;
        }
        else {
            c = false;
        }
    }

    for(auto i : v) {
        cout << mp[i] << " ";
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