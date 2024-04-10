#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

long long multiplyMod(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;
    long long result = 0;

    while (b > 0) {
        if (b % 2 == 1) {
            result = (result + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }

    return result;
}


long long power(long long x, long long y, long long mod) {
    long long result = 1;
    x = x % mod; // Take mod of base if it is greater than or equal to mod

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y % 2 == 1) {
            result = (result * x) % mod;
        }

        // y must be even now
        y = y / 2;
        x = (x * x) % mod;
    }

    return result;
}

long long modInverse(long long a, long long mod) {
    long long m0 = mod, t, q;
    long long x0 = 0, x1 = 1;

    if (mod == 1)
        return 0;

    // Apply extended Euclid Algorithm
    while (a > 1) {
        q = a / mod;
        t = mod;

        mod = a % mod, a = t;
        t = x0;

        x0 = x1 - q * x0;
        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0)
        x1 += m0;

    return x1;
}

long long divideMod(long long a, long long b, long long mod) {
    a %= mod;
    b %= mod;

    // Calculate a * (b^(-1)) % mod
    long long inv = modInverse(b, mod);
    if (inv == -1) {
        // Inverse doesn't exist
        std::cerr << "Inverse doesn't exist!" << std::endl;
        return -1; // You might want to handle this case appropriately
    }

    return (a * inv) % mod;
}

void solve() {
    // Your solution code here

    ll x; 
    cin >> x;

    ll result = power(10, x - 1, 1e9 + 7);
    ll a = multiplyMod(result, 3, 1e9 + 7);
    a += divideMod(result, 30, 1e9 + 7);

    cout << a << endl;
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