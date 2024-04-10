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
    int n;
    cin >> n;

    vector<int> v(n);
    iv(v);

    if(n == 1) {
        cout << 1 << endl;
        return;
    }

    bool flag = (v[0] <= v[1]);
    int result = 1, cnt = 0;

    for(int i = 1; i < n; i++) {
        if(flag) {
            if(v[i - 1] > v[i]) {
                flag = !flag;
                result++;
                cnt += v[i - 1] + v[i];
            }
            else {
                cnt += v[i] - v[i - 1];
            }
        }
        else {
            if(v[i - 1] < v[i]) {
                flag = !flag;
                result++;
                cnt = v[i] - v[i - 1];
            }
            else {
                cnt += v[i - 1] - v[i];
            }
        }
    }

    cout << result + (cnt > 0) << endl;
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