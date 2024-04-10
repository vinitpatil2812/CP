#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

string cov(ll a) {
    return bitset<64>(a).to_string();
}

ll num(string s) {
    return bitset<64>(s).to_ullong();
} 

void solve() {
    // Your solution code here
    ll a, b, r;
    cin >> a >> b >> r;

    if(a < b) {
        swap(a, b);
    }

    string g = cov(a);
    string h = cov(b);

    int count = 0;

    // cout << g.size();

    for(int i = 0; i < g.size(); i++) {
        if(g[i] != h[i]) {
            count++;
        }

        if(count <= 1) {
            continue;
        }

        if(((1LL << (64 - i - 1)) <= r) && (g[i] == '1' && g[i] != h[i])) {
            g[i] = '0';
            h[i] = '1';

            r -= (1LL << (64 - i - 1));
        }
    }

    ll f = num(g);
    ll s = num(h);

    cout << abs(f - s) << endl;

    // cout << g;
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