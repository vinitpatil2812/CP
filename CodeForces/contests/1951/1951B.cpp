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

    int cnt = 0, i = 0;
    swap(v[0], v[k - 1]);

    for(i = 1; i < n; i++) {
        if(v[i] < v[0]) {
            cnt++;
        }
        else {
            break;
        }
    }

    swap(v[0], v[k - 1]);

    for(i = 0; i < n; i++) {
        if(v[i] >= v[k - 1]) {
            break;
        }
    }

    int cnt2 = (i > 0);
    swap(v[i], v[k - 1]);

    for(int j = i + 1; j < n; j++) {
        if(v[j] < v[i]) {
            cnt2++;
        } 
        else {
            break;
        }
    }

    cout << max(cnt, cnt2) << endl;
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