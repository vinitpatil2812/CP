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

        vector<int> a(n), b(n), c(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for(int i = 0; i < n; i++) {
            c[i] = a[i] ^ b[i];
        }

        int ans = c[0];

        for(int i = 1; i < n; i++) {
            ans = ans & c[i];
        }

        cout << ans << endl;
    }

    return 0;
}