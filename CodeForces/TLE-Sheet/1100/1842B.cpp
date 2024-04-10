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
    int n, x;
    cin >> n >> x;

    vector<int> a(n), b(n), c(n);
    iv(a);
    iv(b);
    iv(c);

    int result = 0;

    for(int i = 0; i < n; i++) {
        if((x | a[i]) != x) {
            break;
        }

        result |= a[i];
    }

    for(int i = 0; i < n; i++) {
        if((x | b[i]) != x) {
            break;
        }

        result |= b[i];
    }

    for(int i = 0; i < n; i++) {
        if((x | c[i]) != x) {
            break;
        }

        result |= c[i];
    }

    if(result == x) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
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