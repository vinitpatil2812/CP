#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

int help(int i, int m, vector<int> &a, vector<int> &b, int k) {
    if (k <= 0 || i >= a.size()) {
        return 0;
    }

    int first = m + help(i, m, a, b, k - 1);
    int second = a[i] + help(i + 1, max(m, b[i]), a, b, k - 1);

    return max(first, second);
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n, 0);
    vector<int> b(n, 0);

    iv(a);
    iv(b);

    int m = 0;

    cout << help(0, m, a, b, k) << endl;
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
