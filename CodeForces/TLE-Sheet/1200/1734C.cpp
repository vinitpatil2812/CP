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

    vector<int> v(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        if(s[i - 1] == '1') {
            continue;
        }

        for(int j = i; j <= n; j += i) {
            if(s[j - 1] == '1') {
                break;
            }

            if(v[j] == 0) {
                v[j] = i;
            }
        }
    }

    ll ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            // if(i == 0) {
            //     for(int i = 0; i < n; i++) {
            //         if(s[i] == '0') {
            //             ans++;
            //         }
            //     }

            //     cout << ans << endl;
            //     return;
            // }

            ans += v[i + 1]; 
        }
    }

    cout << ans << endl;
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