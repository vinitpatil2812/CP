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

    for(auto &i : v) {
        i %= 3;
    }

    ll sum = accumulate(all(v), 0LL);

    if(sum % 3 == 0) {
        cout << 0 << endl;
        return;
    }
    else {
        for(auto i : v) {
            if(sum % 3 == i) {
                cout << 1 << endl;
                return;
            }
        }
    }

    cout << min((ll)2, 3 - (sum % 3)) << endl;

    // ll two = 0, one = 0, zero = 0;

    // for(auto i : v) {
    //     if(i == 0) {
    //         zero++;
    //     }
    //     else if(i == 1) {
    //         one++;
    //     }
    //     else {
    //         two++;
    //     }
    // }

    // two -= min(two, one);
    // one -= min(two, one);

    // two = 2 * two;
    // one = 1 * one;

    // cout << n - zero - 2 * min(two, one) << endl;
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