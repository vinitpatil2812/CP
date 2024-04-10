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
        ll n, k, x;
        cin >> n >> k >> x;

        ll pre = (k * (k + 1)) / 2;
        ll total = (n * (n + 1)) / 2;
        ll suf = ((n -k) * (n - k + 1)) / 2;
        suf = total - suf;

        if(x >= pre && x <= suf) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}