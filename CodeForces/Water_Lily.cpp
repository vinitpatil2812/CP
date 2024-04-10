#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll h, l;
    cin >> h >> l;
    cout << setprecision(12) << fixed;
    cout << ((l * 1ll * l) - (h * 1ll * h)) / (2.0 * h);

    return 0;
}