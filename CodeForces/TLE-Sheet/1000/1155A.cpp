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

    string s;
    cin >> s;

    char mx = 'a';
    int j = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] < mx) {
            cout << "YES" << endl;
            cout << j + 1 << " " << i + 1 << endl;
            return;
        }

        if(s[i] >= mx) {
            j = i;
            mx = s[i];
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}