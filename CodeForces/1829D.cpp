#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool ok(int n, int m) {
    if(n == m) {
        return true;
    }

    if(n % 3 != 0) {
        return false;
    }

    return (ok(n / 3, m) || ok(2 * n / 3, m));
}

void solve() {
    int n, m;
    cin >> n >> m;

    cout << (ok(n, m) ? "YES" : "NO");
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << endl;
    }
    
    return 0;
}