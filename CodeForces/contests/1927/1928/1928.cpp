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
    ll a, b;
    cin >> a >> b;

    if(a > b) {
        swap(a, b);
    }

    if(a % 2 && b % 2) {
        cout << "No" << endl;
    }
    else if(a * 2 == b && (a % 2)) {
        cout << "No" << endl;
    }
    else {
        cout << "YES" << endl;
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