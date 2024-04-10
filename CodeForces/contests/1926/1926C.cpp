#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

int sumOfDigitsFrom1ToNUtil(int n, int a[]) 
{ 
    if (n < 10) 
        return (n * (n + 1) / 2); 
     
    int d = (int)(log10(n)); 
    int p = (int)(ceil(pow(10, d))); 
    int msd = n / p; 
     
    return (msd * a[d] + (msd * (msd - 1) / 2) * p + 
            msd * (1 + n % p) + 
            sumOfDigitsFrom1ToNUtil(n % p, a)); 
} 
 
 
int ss(int n) 
{ 
    int d = (int)(log10(n)); 
    int a[d + 1]; 
    a[0] = 0; a[1] = 45;
     
    for(int i = 2; i <= d; i++) 
        a[i] = a[i - 1] * 10 + 45 * 
               (int)(ceil(pow(10, i - 1))); 
 
    return sumOfDigitsFrom1ToNUtil(n, a); 
} 

void solve() {
    // Your solution code here
    int n;
    cin >> n;

    cout << ss(n) << endl;
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