#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool valid(int i, int j, vector<vector<char>> &v) {
    return (v[i - 1][j - 1] == 'B' && v[i - 1][j + 1] == 'B' && v[i + 1][j - 1] == 'B' && v[i + 1][j + 1] == 'B');
}

bool check(vector<vector<char>> &v) {
    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            if (v[i][j] == 'B' && !valid(i, j, v)) {
                return false;
            }
        }
    }
    return true;
}

ll help(int p, int q, vector<vector<char>> &v) {
    if (q >= 7) {
        p++;
        q = 0;
    }

    if (p >= 7) {
        bool ans = check(v);
        if (ans) {
            return 0;
        }

        return INT_MAX;
    }

    ll result = INT_MAX;

    // If the cell is 'B', try changing it to 'W' and recurse
    if (v[p][q] == 'B') {
        v[p][q] = 'W';
        result = min(result, 1 + help(p, q + 1, v));
        v[p][q] = 'B';  // Backtrack
    }

    // Try moving to the next cell without changing
    result = min(result, help(p, q + 1, v));

    return result;
}

void solve() {
    vector<vector<char>> v(7, vector<char>(7));

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> v[i][j];
        }
    }

    int minBtoW = help(0, 0, v);
    cout << minBtoW << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
