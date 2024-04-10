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
    int x, n;
    cin >> x >> n;

    // int result = 1;
    set<int> st;

    for(int i = 1; i * i <= x; i++) {
        if(x % i == 0) {
            st.insert(i);
            st.insert(x / i);
        }
    }

    int g = x / n;
    auto itr = st.lower_bound(g);

    if(*itr > g) {
        itr--;
    }

    int result = *itr;

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