#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

struct Bike {
    int slowness;
    int index;
};

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, Bike>>> adj(n + 1);
    vector<int> s(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, {s[v], w}});
        adj[v].push_back({u, {s[u], w}});
    }

    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    // Dijkstra's Algorithm
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    vector<vector<ll>> dist(n + 1, vector<ll>(1001, LLONG_MAX));

    dist[1][s[1]] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();

        if (d > dist[u][s[u]])
            continue;

        for (auto& neighbor : adj[u]) {
            int v = neighbor.first;
            int si = neighbor.second.slowness;
            int w = neighbor.second.index;

            if (dist[u][s[u]] + w * si < dist[v][si]) {
                dist[v][si] = dist[u][s[u]] + w * si;
                pq.push({dist[v][si], v});
            }
        }
    }

    // Output the shortest distance to the last city
    ll ans = LLONG_MAX;
    for (int si = 1; si <= 1000; si++) {
        ans = min(ans, dist[n][si]);
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
