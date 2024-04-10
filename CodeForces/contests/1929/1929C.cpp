#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

// ll h(ll mid, ll k, ll x, ll a) {
//     ll loss = mid * x;

//     ll profit = mid * (k - 1);

//     return a - loss + profit; 
// }

// ll help(ll mid, ll k, ll x, ll a) {
//     if((x + 1) * mid > a) {
//         return -1;
//     }

//     ll c = a - ((x + 1) * mid);

//     ll r = c + k * mid;

//     return r;
// }

void solve() {
    // Your solution code here

    ll k, x, a;
    cin >> k >> x >> a;

    if(a == 1) {
        cout << "NO" << endl;
        return;
    }

    if(k >= x + 1) {
        cout << "YES" << endl;
        return;
    }

    if(a % (x + 1 - k) != 0 && k < x + 1) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;

    // if(a % abs(k - (x + 1)) != 0 || k >= x + 1)  {
    //     cout << "YES" << endl;
    // }
    // else {
    //     cout << "NO" << endl;
    // }



    // if(h(1, k, x, a) < a) {
    //     cout << "NO" << endl;
    // }
    // else {
    //     cout << "YES" << endl;
    // }



    // ll low = 1, high = a / (x + 1);

    // while(low <= high) {
    //     ll mid = low + (high - low) / 2;

    //     if(h(mid, k, x, a) < a) {
    //         low = mid + 1;
    //     } 
    //     else {
    //         cout << "YES" << endl;
    //         return;
    //     }



    //     // ll ans = help(mid, k, x, a);

    //     // if(ans < a && a != -1) {
    //     //     low = mid + 1;
    //     // }
    //     // else if(ans == -1) {
    //     //     high = mid - 1;
    //     // }
    //     // else {
    //     //     cout << "YES" << endl;
    //     //     return;
    //     // }
    // }

    // cout << "NO" << endl;
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