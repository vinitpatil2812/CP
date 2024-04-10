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
        int n, m, k;
        cin >> n >> m >> k;

        int players = n / k;

        int a1 = min(m, players);
        int a2 = (m - a1 + k - 2) / (k - 1);

        cout << a1 - a2 << endl;
    }
    return 0;
}