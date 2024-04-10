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
        int n, k, x;
        cin >> n >> k >> x;

        if(x < k - 1 || n < k) {
            cout << -1 << endl;
        }        
        else {
            cout << k * (k - 1) / 2 + (n - k) * (x == k ? k - 1 : x) << endl;
        }
    }

    return 0;
}