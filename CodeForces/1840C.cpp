#include<bits/stdc++.h>
using namespace std;
#define int long long int
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k, q;
        cin >> n >> k >> q;

        int result = 0;
        int len = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x <= q) {
                len++;
            }
            else {
                if(len >= k) {
                    result += (len - k + 1) * (len - k + 2) / 2;
                }

                len = 0;
            }
        }

        if(len >= k) {
            result += (len - k + 1) * (len - k + 2) / 2;
        }

        cout << result << endl;
    }
    return 0;
}