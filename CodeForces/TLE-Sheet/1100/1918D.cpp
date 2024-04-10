#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

pll help(ll m, vector<int> &v) {
    ll sum = 0;
    ll current = 0;
    ll seg = 0;

    for(int i = 0; i < v.size(); i++) {
        if(current + v[i] > m) {
            // current = v[i];
            sum += v[i];
            current = 0;
        }
        else {
            current += v[i];
        }

        seg = max(seg, current);
    }

    ll tsum = v[0];
    ll tcurrent = 0;
    ll tseg = 0;

    for(int i = 1; i < v.size(); i++) {
        if(tcurrent + v[i] > m) {
            tsum += v[i];
            tcurrent = 0;
        }
        else {
            tcurrent += v[i];
        }

        tseg = max(tseg, tcurrent);
    }

    if(max(seg, current) <= max(tseg, tcurrent)) {
        return {seg, current};
    }
    else {
        return {tseg, tcurrent};
    }
}

void solve() {
    // Your solution code here
    int n;
    cin >> n;

    vector<int> v(n);
    iv(v);

    ll result = accumulate(all(v), 0LL);

    ll low = 1, high = result;

    while(low <= high) {
        ll mid = low + (high - low) / 2;

        pll p = help(mid, v);

        result = min({result, max(p.first, p.second)});

        if(p.first < p.second) {
            low = mid + 1;
        }
        else if(p.first > p.second) {
            high = mid - 1;
        }
        else {
            break;
        }

        // result = min({result, p.first, p.second});
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