#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

vector<string> solve() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    iv(v);

    int o = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        o += v[i] % 2 != 0;
        a[i] = o;
    }

    vector<string> ans;

    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        l--;
        r--;

        int op = a[r] - (l - 1 >= 0 ? a[l - 1] : 0), c = r - l + 1;
        
        if (k % 2 == 0)
            ans.push_back((o - op) % 2 == 0 ? "NO" : "YES");
        else {
            if (c % 2 == 0)
                ans.push_back((o - op) % 2 == 0 ? "NO" : "YES");
            else
                ans.push_back((c + (o - op)) % 2 ? "YES" : "NO");
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        vector<string> result = solve();
        pv(result);
    }

    return 0;
}

