#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    // Your solution code here
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    iv(v);

    string s;
    cin >> s;

    int i = 0, j = n - 1;

    for(int k = 0; k < n - 1; k++) {
        char c = s[k];

        if(c == 'L') {
            i++;
        }
        else {
            j--;
        }
    }

    ll result = 1;
    vector<int> ans;
    bool flag = 0;

    for(int k = n - 2; k >= 0; k--) {
        result = ((result % m) * (v[flag  == 0 ? i : j] % m)) % m;
        ans.push_back(result);

        if(s[k] == 'L') {
            i--;
            flag = 0;
        }
        else {
            j++;
            flag = 1;
        }
    }

    result = ((result % m) * (v[flag  == 0 ? i : j] % m)) % m;
    ans.push_back(result);

    reverse(all(ans));

    pv(ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}