#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a) {
    ll small = 10, big = 0;

    while(a > 0) {
        ll y = a % 10;
        a /= 10;

        small = min(small, y);
        big = max(big, y);
    }

    return small * big;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll a, k;
        cin >> a >> k;
        
        k--;
        while(k--) {
            ll n = fun(a);

            if(n == 0) {
                break;
            }

            a += n;
        }

        cout << a << endl;
    }

    return 0;
}