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

        vector<int> v(n), a(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
            a[i] = v[i];
        }

        sort(a.begin(), a.end());
        bool ans = true;

        for(int i = 0; i < n; i++) {
            if(v[i] % 2 != a[i] % 2) {
                ans = false;
                break;
            }
        }

        if(ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}