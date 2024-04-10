#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        ll n, result = 0;
        cin >> n;

        map<ll, ll> up, side, d1, d2;

        for(ll i = 0; i < n; i++) {
            ll x, y;
            cin >> x >> y;

            up[x]++;
            side[y]++;
            d1[x - y]++;
            d2[x + y]++;
        }

        for(auto k : up) {
            result += k.second * (k.second - 1);
        }

        for(auto k : side) {
            result += k.second * (k.second - 1);
        }

        for(auto k : d1) {
            result += k.second * (k.second - 1);
        }

        for(auto k : d2) {
            result += k.second * (k.second - 1);
        }

        cout << result << endl;
    }
    
    return 0;
}