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
    int n, d;
    cin >> n >> d;

    vector<int> v(n);
    iv(v);

    sort(all(v), greater<int>());

    int result = 0, r = n;

    for(int i = 0; i < n; i++) {
        int num = d / v[i] + 1;

        if(num > r) {
            break;
        }

        r -= num;
        result++;
    }

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
