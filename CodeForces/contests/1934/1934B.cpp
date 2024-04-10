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
    ll n;
    cin >> n;

    ll result = n;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                for (int l = 0; l < 5; ++l) {
                    ll sumValue = i * 10 + j * 6 + k * 3 + l * 1;
                    if (n - sumValue >= 0 && (n - sumValue) % 15 == 0) {
                        result = min(result, i + j + k + l + (n - sumValue) / 15);
                    }
                }
            }
        }
    }

    cout << result << endl;

    // ll x = n / 15;
    // n %= 15;

    // ll result = n / 15;

    // if(n )

    // n %= 15;

    // if(n >= 15) {
    //     result = min(result, n / 15);
    //     n %= 15;
    // }

    // result = min(result, n / 15);

    // ll x = n % 15;

    // if(x % 15 == 0) {
    //     // result += (n / 10);
    //     cout << n / 15 << endl;
    //     return;
    // }
    // else if(x % 10 == 0) {
    //     // result = (n / 10);
    //     cout << (n / 15) + (n / 10) << endl;
    //     return;
    // }
    // else if(x % 6 == 0) {
    //     // result = (n / 6);
    //     cout << (n / 6) + (n / 15) << endl;
    //     return;
    // }
    // else if(x % 3 == 0) {
    //     // result = (n / 3);
    //     cout << (n / 3) + (n / 15) << endl;
    //     return;
    // }


    // if(n == 15) {
    //     cout << 1 << endl;
    //     return;
    // }
    // else if(n == 14) {
    //     cout << x  + 3 << endl;
    //     return;
    // }
    // else if(x == 13) {
    //     cout << x + 2 << endl;
    //     return;
    // }
    // else if(x == 12) {
    //     cout << x + 2 << endl;
    //     return;
    // }
    // else if(x == 11) {
    //     cout << x + 2 << endl;
    //     return;
    // }
    // else if(x == 10) {
    //     cout << x + 1 << endl;
    //     return;
    // }
    // else if(x == 9) {
    //     cout << x + 2 << endl;
    //     return;
    // }
    // else if(x == 8) {
    //     cout << x + 3 << endl;
    //     return;
    // }
    // else if(x == 7) {
    //     cout << x + 2 << endl;
    //     return;
    // }
    // else if(x == 6) {
    //     cout << x + 1 << endl;
    //     return;
    // }
    // else if((n % 15) == 5) {
    //     cout << (n / 15) + 3 << endl;
    //     return;
    // }
    // else if((n % 15) == 4) {
    //     cout << (n / 15) + 2 << endl;
    //     return;
    // }
    // else if((n % 15) == 3) {
    //     cout << (n / 15) + 1 << endl;
    //     return;
    // }
    // else if((n % 15) == 2) {
    //     cout << (n / 15) + 2 << endl;
    //     return;
    // }
    

    // cout <<  n << endl;
    
    
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