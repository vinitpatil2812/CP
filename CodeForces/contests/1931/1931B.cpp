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

    ll total = accumulate(all(v), 0LL);

    ll num = total / n;
    ll count = 0;

    for(int i = 0; i < n; i++) {
        // if(count < 0) {
        //     cout << "NO" << endl;
        // }

        if(v[i] < num) {
            count -= (num - v[i]);
        }
        else {
            count += (v[i] - num);
        }

        if(count < 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

    // int i = 0, j = n - 1;

    // while(i <= j) {
    //     // if(v[j] > num) {
    //     //     break;
    //     // }

    //     int diff = num - v[j];

    //     while(diff && i < j) {
    //         if(v[i])
    //     }
    // }
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