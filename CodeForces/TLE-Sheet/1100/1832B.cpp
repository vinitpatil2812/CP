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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    iv(v);

    sort(all(v));

    ll sum = accumulate(v.begin(), v.begin() + (n - k), 0LL);
    ll result = sum;

    int i = 0, j = n - k;

    while(j < n) {
            sum -= (v[i] + v[i + 1]);
            sum += v[j];

            i += 2;
            j++;
        
        result = max(result, sum);
    }

    cout << result << endl;
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