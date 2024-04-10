// #include <bits/stdc++.h>

// using namespace std;

// #define ll long long
// #define pll pair<ll, ll>
// #define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
// #define iv(v) { for(auto &x : v) cin >> x; } // inputVector
// #define all(v) v.begin(), v.end() // first and last iterator

// const int mod = 1e9 + 7;

// void solve() {
//     // Your solution code here
//     int n, c, d;
//     cin >> n >> c >> d;

//     int start = INT_MAX;

//     vector<vector<int>> a(n, vector<int> (n, 0));

//     // multiset<int> mst;
//     map<int, int> mp;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> a[i][j];
//             // mst.insert(a[i][j]);
//             mp[a[i][j]]++;
//             start = min(start, a[i][j]);
//         }
//     }
//     // int m = n * n;
//     // vector<int> v(m);
//     // iv(m);

//     // int start = *min_element(all(v));

//     vector<vector<int>> v(n, vector<int> (n, 0));
//     v[0][0] = start;

//     for(int i = 1; i < n; i++) {
//         v[i][0] = v[i - 1][0] + c;
//     }

//     for(int i = 0; i < n; i++) {
//         for(int j = 1; j < n; j++) {
//             v[i][j] = v[i][j - 1] + d;
//         }
//     }

//     // for(int i = 0; i < n; i++) {
//     //     for(int j = 0; j < n; j++) {
//     //         cout << v[i][j] << " ";
//     //     }cout << endl;
//     // }cout << endl;

//     // for(auto i : mst) {
//     //     cout << i << " ";
//     // }cout << endl;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(mp.find(v[i][j]) == mp.end()) {
//                 // cout << v[i][j];
//                 cout << "NO" << endl;
//                 return;
//             }

//             mp[v[i][j]]--;

//             if(mp[v[i][j]] <= 0) {
//                 mp.erase(v[i][j]);
//             }

//             // mst.erase(v[i][j]);


//     //         for(auto i : mst) {
//     //     cout << i << " ";
//     // }cout << endl;

//         }
//     }

//     cout << "YES" << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;

//     while(t--) {
//         solve();
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, h = n - 1;
    int ans = 0;
    bool f = true;
    while (l <= h) {
        if (l == h) {
            if (k >= a[l]) {
                ans++;
                break;
            }
        }
        if (f) {
            if (a[l] <= a[h]) {
                if (k >= (2 * a[l] - 1)) {
                    ans++;
                    k -= (2 * a[l] - 1);
                    a[h] -= (a[l] - 1);
                    l++;
                    f = false;
                } else
                    break;
            } else {
                if (k >= (2 * a[h])) {
                    ans++;
                    k -= 2 * a[h];
                    a[l] -= a[h];
                    h--;
                } else
                    break;
            }
        } else {
            if (a[h] <= a[l]) {
                if (k >= (2 * a[h] - 1)) {
                    ans++;
                    k -= (2 * a[h] - 1);
                    a[l] -= (a[h] - 1);
                    h--;
                    f = true;
                } else
                    break;
            } else {
                if (k >= (2 * a[l])) {
                    ans++;
                    k -= 2 * a[l];
                    a[h] -= a[l];
                    l++;
                } else
                    break;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
cf c
