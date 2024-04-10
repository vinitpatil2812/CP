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

    while(i <= j && v[i] == v[j]) {
        i++;
        j--;
    }

    if(i >= j) {
        cout << "YES" << endl;
        return;
    }

    int f = v[i], s = v[j];

    vector<int> a, b;

    for(auto k : v) {
        if(k != f) {
            a.push_back(k);
        }

        if(k != s) {
            b.push_back(k);
        }
    }

    i = 0, j = a.size() - 1;

    while(i <= j && a[i] == a[j]) {
        i++;
        j--;
    }

    if(i >= j) {
        cout << "YES" << endl;
        return;
    }

    i = 0, j = b.size() - 1;

    while(i <= j && b[i] == b[j]) {
        i++;
        j--;
    }

    if(i >= j) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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