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

    unordered_set<char> st;

    vector<int> pre(n, 0);
    vector<int> suff(n, 0);

    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        pre[i] = st.size();
    }

    st.clear();

    for(int i = n - 1; i >= 0; i--) {
        st.insert(s[i]);
        suff[i] = st.size();
    }

    int result = 2;

    for(int i = 0; i < n - 1; i++) {
        result = max(result, pre[i] + suff[i + 1]);
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