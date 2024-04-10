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
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    iv(v);

    int len = -1, sum = 0, j = 0;

    for(int i = 0; i < n; i++) {
        sum += (v[i] == 1);

        while(sum > s) {
            // len = max(len, i - j + 1);
            sum -= (v[j] == 1);
            j++;
        }

        if(sum == s) {
            len = max(len, i - j + 1);
        }
    }

    if(len == -1) {
        cout << -1 << endl;
    }
    else {
        cout << n - len << endl;
    }

    // vector<int> a(n), b(n);

    // int p = n - 1;

    // for(int i = n - 1; i >=0; i--) {
    //     if(v[i] == 1) {
    //         p = i;
    //     }

    //     a[i] = p - i;
    // }

    // p = 0;
    // for(int i = 0; i < n; i++) {
    //     if(v[i] == 1) {
    //         p = i;
    //     }

    //     b[i] = i - p;
    // }

    // int i = 0, j = n - 1;
    // int sum = accumulate(all(v), 0);
    // int ans = 0;

    // while(i <= j) {
    //     if(sum == s) {
    //         break;
    //     }

    //     if(a[i] <= b[j]) {
    //         sum -= (v[i] == 1);
    //         i++;
    //     }
    //     else {
    //         sum -= (v[j] == 1);
    //         j--;
    //     }

    //     ans++;
    // }

    // if(sum != s) {
    //     cout << -1 << endl;
    // }
    // else {
    //     cout << ans << endl;
    // }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
