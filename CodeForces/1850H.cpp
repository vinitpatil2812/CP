#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int long long

const int N = 2e5 + 5;
vector<pair<int, int>> adj[N];
int val[N], vis[N];

void dfs(int u) {
    vis[u] = 1;

    for(auto x : adj[u]) {
        int v = x.first, w = x.second;

        if(!vis[v]) {
            val[v] = val[u] + w;
            dfs(v);
        } 
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i <= n; i++) {
        adj[i].clear();
        vis[i] = 0;
        val[i] = 0;
    }

    vector<array<int, 3>> c;

    for(int i = 1; i <= m; i++) {
        int a, b, d;
        cin >> a >> b >> d;

        adj[a].push_back({b, d});
        adj[b].push_back({a, -d});
        c.push_back({a, b, d});
    }

    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            dfs(i);
        }
    }

    for(int i = 1; i <= m; i++) {
        int a = c[i - 1][0], b = c[i - 1][1], d = c[i - 1][2];

        if(val[a] + d != val[b]) {
            cout << "NO" << endl;
            return;
        } 
    }

    cout << "YES" << endl;
}
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}