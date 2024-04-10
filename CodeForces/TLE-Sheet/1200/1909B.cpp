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

    vector<ll> v(n);
    iv(v);

    ll c = 2;

    while(1) {
        set<ll> st;

        for(auto i : v) {
            st.insert(i % c);
        }

        if(st.size() == 2) {
            cout << c << endl;
            return;
        }

        c <<= 1;
    }

    
    // for(auto i : v) {
    //     cout << i % 6 << " ";
    // }cout << endl;
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