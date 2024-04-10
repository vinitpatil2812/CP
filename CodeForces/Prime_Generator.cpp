#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int N = 1e6;
vector<bool> sieve(N + 1, true); // Use a vector<bool> for the sieve

vector<int> getPrimes(int n) {
    vector<int> result;

    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {
            result.push_back(i);
        }
    }

    return result;
}

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<int> primes = getPrimes(sqrt(m));

    vector<bool> temp(m - n + 1, true); // Use vector<bool> here

    for (auto pr : primes) {
        // cout << pr << endl;  
        int firstMultiple = (n / pr) * pr;

        if (firstMultiple < n) {
            firstMultiple += pr;
        }

        for (int i = max(firstMultiple, pr * pr); i <= m; i += pr) {
            temp[i - n] = false;
        }
    }

    for (int i = n; i <= m; i++) {
        if (temp[i - n] && i != 1) {
            cout << i << endl;
        }
    }

    // for(int i = 1; i < 10; i++) {
    //     cout << primes[i] << " ";
    // }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    sieve[1] = false;

    for (int i = 2; i * i <= N; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= N; j += i) {
                sieve[j] = false;
            }
        }
    }

    while (t--) {
        solve();
    }

    return 0;
}
