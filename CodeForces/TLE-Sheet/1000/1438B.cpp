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

    // for(int i = 1; i < n; i++) {
    //     map<int, int> a, b;

    //     for(int j = 0; j < i; j++) {
    //         a[v[j]]++;
    //     }

    //     for(int j = i; j < n; j++) {
    //         b[v[j]]++;
    //     }

    //     for(auto &itr : a) {
    //         while(itr.second >= 2) {
    //             itr.second -= 2;
    //             a[itr.first + 1]++;
    //         }
    //     }

    //     for(auto &itr : b) {
    //         while(itr.second >= 2) {
    //             itr.second -= 2;
    //             b[itr.first + 1]++;
    //         }
    //     }

    //     vector<int> av, bv;

    //     for(auto itr : a) {
    //         if(itr.second > 0) {
    //             av.push_back(itr.first);
    //         }
    //     }

    //     for(auto itr : b) {
    //         if(itr.second > 0) {
    //             bv.push_back(itr.first);
    //         }
    //     }

    //     if(av == bv) {
    //         // cout << i << endl;
    //         cout << "YES" << endl;
    //         return;
    //     }        
    // }

    map<int, int> mp;

    for(auto i : v) {
        mp[i]++;
    }

    for(auto i : mp) {
        if(i. second >= 2) {
            cout << "YES" << endl;
            return;
        }
    }

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