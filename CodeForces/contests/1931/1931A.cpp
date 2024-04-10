#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;


    for(char i = 'a'; i <= 'z'; i++) {
        for(char j = 'a'; j <= 'z'; j++) {
            for(char k = 'a'; k <= 'z'; k++) {
                string result = "";
                result.push_back(i);
                result.push_back(j);
                result.push_back(k);

                if((i - 'a') + (j - 'a') + (k - 'a') + 3 == n) {
                    cout << result << endl;
                    return;
                }
            }
        }
    }

    // string result = "";

    // for(char i = 'a'; i <= 'z'; i++) {
    //     if ((n - (i - 'a' + 1)) / 2 <= 26 && (52 + (i - 'a' + 1) >= 0)) {
    //         result.push_back(i);
    //         n -= (i - 'a') + 1;
    //         break;
    //     }
    // }

    // for(char i = 'a'; i <= 'z'; i++) {
    //     if ((n - (i - 'a' + 1)) <= 26 && (26 + (i - 'a' + 1) >= 0)) {
    //         result.push_back(i);
    //         n -= (i - 'a') + 1;
    //         break;
    //     }
    // }

    // result.push_back(char(n - 1 + 'a'));

    // cout << result << endl;
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
