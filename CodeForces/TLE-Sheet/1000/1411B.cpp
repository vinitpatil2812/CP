#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const int mod = 1e9 + 7;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}

bool checkDivisibility(ll num) {
    ll temp = num;

    while (temp > 0) {
        ll digit = temp % 10;

        if(digit == 0) {
            temp /= 10;
            continue;
        }

        if (num % digit != 0) {
            return false;
        }

        temp /= 10;
    }

    return true;
}

void solve() {
    ll n;
    cin >> n;

    while (1) {
        if(checkDivisibility(n)) {
            cout << n << endl;
            return;
        }

        n++;
    }

    cout << n << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
