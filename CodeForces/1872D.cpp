#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum(ll n) {
    return n * (n + 1) / 2;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll common = n / (x * y / __gcd(x, y));

        ll a = (n / x) - common;
        ll b = (n / y) - common;

        cout << sum(n) - sum(n - a) - sum(b) << endl;
    }
    return 0;
}