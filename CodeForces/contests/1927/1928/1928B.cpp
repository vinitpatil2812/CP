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

    sort(all(v));

    int result = 1, i = 0;

    map<int, int> mp;
    set<int> st;

    for(int j = 0; j < n; j++) {
        mp[v[j]]++;
        st.insert(v[j]);

        while(v[j] - v[i] >= n) {
            mp[v[i]]--;

            if(mp[v[i]] == 0) {
                mp.erase(v[i]);
                st.erase(v[i]);
            }

            i++;
        }

        result = max(result, (int)st.size());
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