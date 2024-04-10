#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> directionx = {1, 0, -1, 0};
vector<int> directiony = {0, 1, 0, -1};

bool isDeadly(int i, int j, int sx, int sy, int d) {
    if(abs(i - sx) + abs(j - sy) <= d) {
        return true;
    }

    return false;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        sx--;
        sy--;

        vector<vector<int>> path(n, vector<int> (m, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(isDeadly(i, j, sx, sy, d)) {
                    path[i][j] = 1;
                }
            }
        }

        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         cout << path[i][j] << " ";
        //     }cout << endl;
        // }

        queue<vector<int>> q;
        q.push({0, 0, 0});
        int ans = INT_MAX;

        while(!q.empty()) {
            vector<int> v = q.front();
            q.pop();

            int i = v[0];
            int j = v[1];
            int steps = v[2];

            if(i == n - 1 && j == m - 1) {
                ans = min(ans, steps);
            }

            for(int dir = 0; dir < 4; dir++) {
                int new_i = i + directionx[dir];
                int new_j = j + directiony[dir];

                if(new_i >= 0 && new_j >= 0 && new_i < n && new_j < m && path[new_i][new_j] != 1) {
                    q.push({new_i, new_j, steps + 1});
                    path[new_i][new_j] = 1;
                }
            }            
        }

        ans = ans == INT_MAX ? -1 : ans;

        cout << ans << endl;
    }

    return 0;
}