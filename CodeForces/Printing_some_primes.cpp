#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e8;
vector<bool> isPrime(maxN + 1, true);
vector<int> primes;

void sieve() {
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= maxN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= maxN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    for (int i = 0; i < primes.size(); i++) {
        if (i % 100 == 0) {
            cout << primes[i] << endl;
        }
    }

    return 0;
}
