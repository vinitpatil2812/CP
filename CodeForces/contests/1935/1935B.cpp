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

    vector<int> vs(n + 1, 0);

    for(auto i : v) {
        vs[i] = 1;
    }

    int i = 0;

    while(i <= n && vs[i] != 0) {
        i++;
    }

    if(i > n) {
        cout << -1 << endl;
        return;
    }

    // if(i == 0) {
    //     cout << 2 << endl;
    //     cout << 1 << " " <<  1 << endl;
    //     cout << 2 << " " << n << endl;
    //     return;
    // }

    vector<pair<int, int>> r;
    set<int> st;
    int k = 0;
    vector<int> vv;

    for(int j = 0; j < n; j++) {

        if(v[j] < i) {
            st.insert(v[j]);
        } 


        if(st.size() >= i) {
            r.push_back({k, j});
            k = j + 1;
            st.clear();
        }

        // if(v[j] < i) {
        //     st.insert(v[j]);
        // } 

        // vv.push_back(v[j]);
    }

    // if(st.size() >= i) {
    //     r.push_back({k, n});
    // }

    if(k < n) {
        r.back().second = n - 1;
    }

    if(r.size() < 2) {
        cout << -1 << endl;
        return;
    }

    cout << r.size() << endl;
    
    for(auto j : r) {
        cout << j.first + 1 << " " << j.second + 1 << endl;
    };
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