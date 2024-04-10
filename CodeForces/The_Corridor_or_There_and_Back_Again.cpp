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
        int n;
        cin >> n;

        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            int d, s;
            cin >> d >> s;

            int current = d + ((s + 1) / 2) - 1;
            ans = min(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}