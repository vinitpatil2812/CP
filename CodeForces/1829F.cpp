#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> node(n, 0);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        node[u]++;
        node[v]++;
    }

    int x = *max_element(node.begin(), node.end());
    int y = 0;

    for(int i = 0; i < n; i++) {
        if(node[i] != x) {
            y = max(y, node[i]);
        }
    }

    cout << x << " " << y << endl;
}
  
int main()
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

