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

    int i = 0, j = n - 1;

    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    while(v[i] == v[i + 1]) {
        i++;
    }

    while(v[j] == v[j - 1]) {
        j--;
    }

    if(v[i] == v[j]) {
        cout << ((n - ((i + 1) + (n - j))) < 0 ? 0 : (n - ((i + 1) + (n - j)))) << endl;
        return;
    }

    cout << min(n - (i + 1), n - (n - j)) << endl;
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