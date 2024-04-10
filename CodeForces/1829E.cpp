#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool vis[1001][1001];
int arr[1001][1001];
int n, m;

int dfs(int i, int j) {
    vis[i][j] = 1;
    
    int ans = arr[i][j];

    if(i != 0 && arr[i - 1][j] != 0 && !vis[i - 1][j]) {
        ans += dfs(i - 1, j);
    }

    if(j != 0 && arr[i][j - 1] != 0 && !vis[i][j - 1]) {
        ans += dfs(i, j - 1);
    }

    if(i != n - 1 && arr[i + 1][j] != 0 && !vis[i + 1][j]) {
        ans += dfs(i + 1, j);
    }

    if(j != m - 1 && arr[i][j + 1] != 0 && !vis[i][j + 1]) {
        ans += dfs(i, j + 1);
    }

    return ans;
}

void solve() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            vis[i][j] = false;
        }
    }

    int result = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!vis[i][j] && arr[i][j] != 0) {
                result = max(result, dfs(i, j));
            }
        }
    }

    cout << result << endl;
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