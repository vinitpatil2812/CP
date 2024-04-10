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

    set<char> st;

    ll result = 0;

    for(int i = 0; i < n; i++) {
        if(st.find(s[i]) != st.end()) {
            continue;
        }

        result += (n - i);
        st.insert(s[i]);
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