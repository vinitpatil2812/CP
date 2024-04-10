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
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    iv(a);

    // ll i = 0, j = n - 1;
    // bool turn = 1; // 1 -> i;

    // vector<int> visited(n, 0);

    // while(i <= j && k > 0) {
    //     ll a = min({k, v[i], v[j]});

    //     v[i] -= a / 2;
    //     v[j] -= a / 2;
    //     k -= a;

    //     if(a % 2) {
    //         if(turn) {
    //             v[i]--;
    //         }
    //         else {
    //             v[j]--;
    //         }
    //     }

    //     if(a % 2) {
    //         turn = !turn;
    //     }
    //     // else {
    //     //     turn = 1;
    //     // }

    //     if(v[i] <= 0 && !visited[i]) {
    //         visited[i] = 1;
    //         i++;
    //     }

    //     if(v[j] <= 0 && !visited[i]) {
    //         visited[j] = 1;
    //         j--;
    //     }
    // }

    // // if(i > j) {
    // //     i = j - 1;
    // // }

    // // cout << j << " " <<  i << " ";

    // cout << n - (j - i + 1) << endl;

    int i = 0, j = n - 1;
    int result = 0;
    bool turn = true; 
    while (i <= j) {
        if (i == j) {
            if (k >= a[i]) {
                result++;
                break;
            }
        }
        if (turn == false) {
            if (a[j] <= a[i]) {
                if (k >= (2 * a[j] - 1)) {
                    result++;
                    k -= (2 * a[j] - 1);
                    a[i] -= (a[j] - 1);
                    j--;
                    turn = true; 
                } else
                    break;
            } else {
                if (k >= (2 * a[i])) {
                    result++;
                    k -= 2 * a[i];
                    a[j] -= a[i];
                    i++;
                } else
                    break;
            }
        } else {
            if (a[i] > a[j]) {
                if (k >= (2 * a[j])) {
                    result++;
                    k -= 2 * a[j];
                    a[i] -= a[j];
                    j--;
                } else
                    break;    
            } else {
                if (k >= (2 * a[i] - 1)) {
                    result++;
                    k -= (2 * a[i] - 1);
                    a[j] -= (a[i] - 1);
                    i++;
                    turn = false; 
                } else
                    break;
            }
        }
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