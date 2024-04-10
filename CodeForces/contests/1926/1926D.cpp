#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    iv(v);

    map<int, int> mp;

    for(auto i : v) {
        mp[i]++;
    }

    int count = 0;

    for(auto i : v) {
        int c = i ^ INT_MAX;

        if(mp.find(c) != mp.end() && mp[c] > 0 && mp.find(i) != mp.end() && mp[i] > 0) {
            // cout << i << " " << c << endl;
            count++;
            mp[c]--;
            mp[i]--;

            if(mp[c] <= 0) {
                mp.erase(c);
            }

            if(mp[i] <= 0) {
                mp.erase(i);
            }
        }  
    }

    // for(auto itr : mp) {
    //     cout << itr.first << " " << itr.second << endl;
    // }

    // cout << mp.size();

    // cout << count << endl;

    cout << count + (n - 2 * (count)) << endl;
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
