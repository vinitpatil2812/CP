#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;

    if((n / 2 ) % 2 == 0) {
        cout << "YES" << endl;

        int sum = 0;

        for(int i = 2; i <= n; i += 2) {
            sum += i;

            cout << i << " ";
        }

        for(int i = 1; i < n - 1; i += 2) {
            sum -= i;

            cout << i << " ";
        }

        cout << sum << endl;        
    }
    else {
        cout << "NO" << endl;
    }
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}