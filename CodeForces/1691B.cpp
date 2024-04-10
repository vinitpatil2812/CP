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

    vector<int> v(n + 1);
    
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        v[i] = x;
    }

    if(n == 1) {
        cout << -1 << endl;
        return;
    }

    vector<int> result(n + 1);
    iota(all(result), 0);

    for(int i = 1; i < n; i++) {
        if(v[result[i]] == v[result[i + 1]]) {
            swap(result[i], result[i + 1]);
        }
    }

    for(int i = 1; i <= n; i++) {
        if(result[i] == i) {
            cout << -1 << endl;
            return;
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
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