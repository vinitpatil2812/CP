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
    int n, m, k;
    cin >> n >> m >> k;

    int result = 0;

    vector<int> a(n), b(m);
    iv(a);
    iv(b);

    map<int, int> bmp, amp;

    for(int i = 0; i < m; i++) {
        amp[a[i]]++;
    }

    for(auto i : b) {
        bmp[i]++;
    }

    int good = 0, ans = 0;

    for(auto i : bmp) {
        good += min(amp[i.first], i.second);
    }

    // cout << good << endl;

    ans += (good >= k);

    for(int i = m; i < n; i++) {
        amp[a[i - m]]--;

        if(amp[a[i - m]] < bmp[a[i - m]]) {
            good--;
        }

        amp[a[i]]++;

        if(amp[a[i]] <= bmp[a[i]]) {
            good++;
        }

        ans += (good >= k);
    }

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