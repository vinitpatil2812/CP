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
        int n, x;
        cin >> n >> x;

        if(n <= 2) {
            cout << 1 << endl;
            continue;
        }

        n -= 2;

        if(n % x == 0) {
            cout << (n / x ) + 1 << endl;
        }
        else {
            cout << (n / x) + 2 << endl;
        }
    }
    return 0;
}