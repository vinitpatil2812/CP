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

    map<int, int> mp;

    for(auto i : v) {
        mp[i]++;
    }

    if(mp.begin() -> second == 1) {
        cout << "YES" << endl;
        return;
    }


    vector<int> a;

    for(auto it : mp) {
        a.push_back(it.first);
    }

    if(a.size() == 1) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 1; i < a.size(); i++) {
        if(a[i] % a[0] != 0) {
            cout << "YES" << endl;
            return;
        }
    }

    // for(auto i : a) {
    //     cout << i << " ";
    // }

    cout << "NO" << endl;
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