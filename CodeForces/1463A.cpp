#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll s = a + b + c;
        ll k = s / 9;

        if(s % 9 == 0 && min({a, b, c}) >= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}