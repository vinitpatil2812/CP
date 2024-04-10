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
        int n, k;
        cin >> n >> k;

        k = min(k, 30);

        cout << min(n, (1 << k) - 1) + 1 << endl;
    }

    return 0;
}