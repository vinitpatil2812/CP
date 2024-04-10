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

    // if(b % 2 && a != b && a % 2) {
    //     cout << -1 << endl;
    //     return;
    // }

    if(a == b) {
        cout << 0 << endl;
        return;
    }

    if(a > b) {
        swap(a, b);
    }

    if(b % a != 0) {
        cout << -1 << endl;
        return;
    }

    ll total = b / a;
    ll result = 0;

    if(total % 2) {
        cout << -1 << endl;
        return;
    }

    while(total > 1) {
        if(total % 8 == 0) {
            total /= 8;
        }
        else if(total % 4 == 0) {
            total /= 4;
        }
        else {
            total /= 2;
        }

        result++;
    }

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