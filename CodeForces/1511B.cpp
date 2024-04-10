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
        int a, b, c;
        cin >> a >> b >> c;

        ll x = pow(10, c - 1);
        ll y = pow(10, c - 1);

        while(x < pow(10, a - 1)) {
            x *= 2;
        }

        while(y < pow(10, b - 1)) {
            y *= 3;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}