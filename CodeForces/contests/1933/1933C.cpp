#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

ll cpow(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

void solve() {
        int a, b, l;
        cin >> a >> b >> l;
        
        set<int> st;
        
        for (int x = 0; ; x++) {
            ll pa = cpow(a, x);
            if (pa > l) break;
            
            for (int y = 0; ; y++) {
                ll num = pa * cpow(b, y);
                if (num > l) break;
                
                if (l % num == 0) {
                    st.insert(l / num);
                }
            }
        }
        
        cout << st.size() << endl;
    }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
