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

    string a, b;
    cin >> a >> b;

    map<string, ll> mp;

    string r1, r2;
    string temp1 = "";

    // for(int i = 0; i < n; i++) {
    //     temp1.push_back(a[i]);
    //     r1.push_back(temp1);
    // }

    string temp2 = "";
    // reverse(all(b));

    // for(int i = n - 1; i >= 0; i--) {
    //     // temp.push_back(b[i]);
    //     temp2.insert(temp2.begin(), b[i]);
    //     r2[i] = temp2;
    // }

    // reverse(all(r2));

    // pv(r1);
    // pv(r2);
    temp1 = a;
    temp1.push_back('2');

    ll count = 0;
    string ans = "temp1";

    for(int i = n - 1; i >= 0; i--) {
        // string r1 = a.substr(0, i + 1);
        // string r2 = b.substr(i);
        // temp1.push_back(a[i]);
        temp1.pop_back();
        r1 = temp1;

        temp2.insert(temp2.begin(), b[i]);
        r2 = temp2;




        // if()

        r1 += r2;

        // r/


        mp[r1]++;
    }

    cout << mp.begin() -> first << endl;
    cout << mp.begin() -> second << endl;
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