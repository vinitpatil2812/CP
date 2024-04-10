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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int result = n, white = 0;

    int i = 0, j = 0;

    while(i < n && j < n) {
        if(s[j] == 'W') {
            white++;
        }

        while(j - i + 1 > k) {
            white -= (s[i++] == 'W');
        }

        if(j - i + 1 == k) {
            result = min(result, white);
        }

        j++;
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