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

    vector<int> v(2 * n);

    iv(v);

    vector<int> a, b;
    int ak = k, bk = k;

    vector<int> av(n + 1, 0), bv(n + 1, 0);

    for(int i = 0; i < n; i++) {
        av[v[i]]++;
    }

    for(int i = n; i < 2 * n; i++) {
        bv[v[i]]++;
    }

    for(int i = 1; i <= n && ak > 0; i++) {
        if(av[i] == 2) {
            a.push_back(i);
            a.push_back(i);

            ak--;
        }
    }

    for(int i = 1; i <= n && bk > 0; i++) {
        if(bv[i] == 2) {
            b.push_back(i);
            b.push_back(i);

            bk--;
        }
    }

    ak *= 2;

    for(int i = 1; i <= n && ak > 0; i++) {
        if(av[i] == 1) {
            a.push_back(i);
            b.push_back(i);
            
            ak--;
        }
    }

    pv(a);
    pv(b);    
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