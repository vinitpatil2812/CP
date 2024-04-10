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

    if(n <= 2) {
        cout << 0 << endl;
        return;
    }

    ll result = 0;

    for(int i = 2; i < n; i++) {
        if((s[i - 2] == 'm' && s[i - 1] == 'a' && s[i] == 'p') || (s[i - 2] == 'p' && s[i - 1] == 'i' && s[i] == 'e')) {
            result++;
            i += 2;
        }
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