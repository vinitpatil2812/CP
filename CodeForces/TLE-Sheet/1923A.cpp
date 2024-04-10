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

    int i = 0, j = n - 1;

    while(i < n && v[i] != 1) {
        i++;
    }

    while(j >= 0 && v[j] != 1) {
        j--;
    }

    if(i < j) {
        int result = 0;

        for(int k = i; k <= j; k++) {
            result += (v[k] == 0);
        }

        cout << result << endl;

    }
    else {
        cout << 0 << endl;
    }
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