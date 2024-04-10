#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void dfs(ll i,ll  &count, vector<int> &visited, vector<vector<ll>> &adj) {
    visited[i] = 1;
    count++;

    for(auto j : adj[i]) {
        if(!visited[j]) {
            dfs(j, count, visited, adj);
        }
    }
}

void solve() {
    // Your solution code here
    int n, k;
    cin >> n >> k; 

    vector<vector<ll>> adj(n + 1);

    for(ll i = 0; i < n + 1; i++) {
        adj[i] = vector<ll> ();
    }

    for(ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    priority_queue<ll> result;
    vector<int> visited(n + 1, 0);

    for(ll i = 1; i <= n; i++) {
        if(!visited[i]) {
            ll count = 0;
            dfs(i, count, visited, adj);

            result.push(count);
        }
    }

    while(k > 0 && !result.empty()) {
        k--;
        ll tp = result.top();
        result.pop();

        result.push(tp / 2);
        result.push(tp - (tp / 2));
    }

    vector<ll> a;

    while(!result.empty()) {
        a.push_back(result.top());
        result.pop();
    }

    ll ans = *min_element(all(a));

    cout << ans << endl;
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