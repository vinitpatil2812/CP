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
    ll a, b, c;
    cin >> a >> b >> c;

    ll result = a;

    // if(b % 3 != 0) {
    //     cout << -1 << endl;
    //     return;
    // }

    result += (b / 3);
    b %= 3;

    if(b + c < 3 && b != 0) {
        cout << -1 << endl;
        return;
    }

    result += ((b + c + 2) / 3);

    // result += ceil(c / 3);

    cout << result << endl;
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