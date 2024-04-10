#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

// set<int> st;

// void dfs(int x, int i, vector<pair<int, char>> &v, int n) {
//     st.insert(x);  // Insert the original value without adding 1

//     if (v[i].second == '0') {
//         int f = (x + v[i].first) % n;
//         if (f < 0) {
//             f = n + f;
//         }

//         st.insert(f);
//         dfs(f, i + 1, v, n);
//     }

//     if (v[i].second == '1') {
//         int f = (x - v[i].first + n) % n;
//         if (f < 0) {
//             f = n + f;
//         }

//         st.insert(f);
//         dfs(f, i + 1, v, n);
//     }

//     if (v[i].second == '?') {
//         int f = (x + v[i].first) % n;
//         int s = (x - v[i].first + n) % n;

//         if (f < 0) {
//             f = n + f;
//         }
//         if (s < 0) {
//             s = n + s;
//         }

//         st.insert(f);
//         st.insert(s);

//         dfs(f, i + 1, v, n);
//         dfs(s, i + 1, v, n);
//     }
// }


// void solve() {
//     // Your solution code here
//     int n, m, x;
//     cin >> n >> m >> x;

//     // x--;
    
//     vector<pair<int, char>> v(m);

//     for(int i = 0; i < m;  i++) {
//         cin >> v[i].first;
//         cin >> v[i].second;
//     }

//     dfs(x, 0, v, n);

//     cout << st.size() << endl;

//     for(auto i : st) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

void st(int& x, char c, int d, set<int>& p, int n) {
    int np;

    if (c == '0') {
        np = (x + d) % n;
        if (np == 0) np = n;
    } else if (c == '1') {
        np = (x - d + n) % n;
        if (np == 0) np = n;
    } else {
        int npc = (x + d) % n;
        if (npc == 0) npc = n;
        int npcc = (x - d + n) % n;
        if (npcc == 0) npcc = n;
        p.insert(npc);
        p.insert(npcc);
        return;
    }

    p.insert(np);
    x = np;
}

void sg(int n, int m, int x, vector<pair<int, char>>& th) {
    set<int> pp;
    pp.insert(x);

    for (const auto& ti : th) {
        set<int> npp;
        for (int p : pp) {
            st(p, ti.second, ti.first, npp, n);
        }
        pp = npp;
    }

    cout << pp.size() << endl;
    for (int p : pp) {
        cout << p << " ";
    }
    cout << endl;
}

void solve() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<pair<int, char>> th(m);
    for (int i = 0; i < m; i++) {
        cin >> th[i].first >> th[i].second;
    }

    sg(n, m, x, th);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        // st.clear();
        solve();
    }

    return 0;
}