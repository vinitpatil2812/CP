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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;

        // if(b / 2 <= a) {
            ll second = min(x, y) * b;
            ll first = (x + y - (2 * min(x, y))) * a;

            ll ans = first + second;
        // }
        // else {
            ans = min(ans, (x + y) * a); 
        // }

        cout << ans << endl;
    }
    return 0;
}