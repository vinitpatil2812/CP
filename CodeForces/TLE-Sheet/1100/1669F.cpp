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

    int i = 0, j = n - 1, bob = 0, alice = 0, result = 0;

    while(i <= j) {
        if(alice == bob) {
            result = max(result, i + (n - (j + 1)));
            alice += v[i];
            i++;
        }
        else if(alice < bob) {
            alice += v[i];
            i++;
        }
        else {
            bob += v[j];
            j--;
        }
    }

    if(alice == bob) {
        result = max(result, i + (n - (j + 1)));
    }

    cout << result << endl;
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