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
    string s;
    cin >> s;

    string hr = s.substr(0, 2);
    string mn = s.substr(3, 2);

    string z = "";

    if(hr >= "12") {
        z = "PM";
    }
    else {
        z = "AM";
    }

    if(hr > "12") {
        int x = stoi(hr);
        x -= 12;
        hr = to_string(x);
    }  
    else if(hr == "00") {
        hr = "12";
    }  

    if(hr.size() == 1) {
        cout << 0;
    }
    cout << hr;
    cout << ":";
    cout << mn;
    cout << " ";
    cout << z;
    cout << endl;
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