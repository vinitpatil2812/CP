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

    vector<int> x(n), y(n), z(n);

    iv(x);
    iv(y);

    for(int i = 0; i < n; i++) {
        z[i] = y[i] - x[i];
    }

    int ans = 0;

    sort(all(z));

    int i = 0, j = n - 1;

    while(i < j) {
        if(z[i] + z[j] >= 0) {
            i++;
            j--;
            ans++;
        }
        else {
            i++;
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