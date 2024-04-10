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

    int mn = INT_MAX, mx = INT_MIN;

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            char c;
            cin >> c;

            if(c == '1') {
                count++;
            }
        }

        // cout << count << " ";
        if(count != 0) {
            mx = max(mx, count);
            mn = min(mn, count);
        }
    }

    // cout << mx << " " << mn << endl;

    if(mx == mn) {
        cout << "SQUARE" << endl;
    }
    else {
        cout << "TRIANGLE" << endl;
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