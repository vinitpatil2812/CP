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

    int result = 0, prev = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '*') {
            if(prev == 1) {
                break;
            }

            prev = 1;
        }
        else if(s[i] == '@') {
            result++;
            prev = 0;
        }
        else {
            prev = 0;
        }

        // prev = 0;
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