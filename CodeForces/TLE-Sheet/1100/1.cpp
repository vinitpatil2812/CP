#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

ll help(ll m, vector<ll> &v) {
    ll result = 0;
    int i = 0;
    ll prev = v[0];

    while(i + m < v.size()) {
        i += m;
        result = max(result, v[i - 1] - prev);
        prev = v[i];
    } 

    result = max(result, v[v.size() - 1] - prev);

    return result;
}

void solve() {
    // Your solution code here
    ll n, k, s;
    cin >> n >> k >> s;

    vector<ll> v(n);
    iv(v);

    sort(all(v));
    // v.push_back(s); // Uncomment this line if you want to include the ending point

    ll result = LLONG_MAX; // Change INT_MAX to LLONG_MAX

    ll low = 1, high = s;

    while(low <= high) {
        ll mid = low + (high - low) / 2;

        if(mid * k < n) {
            low = mid + 1;
        } else {
            ll h = help(mid, v);

            if(h <= result) {
                result = h;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }

    cout << result << endl;    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
