#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll d, s, x, k, result = 1e9;

    for(int i = -1; i <= 1; i++) {
        for(int j = -1; j <= 1; j++) {
            d = arr[1] - arr[0] + i + j;
            s = abs(i);

            for(k = 1; k < n; k++) {
                x = abs(arr[1] - (arr[0] + i + k * d));

                if(x > 1) {
                    break;
                }

                s += x;
            }

            cout << "s is" << s << endl;

            if(k == n) {
                result = min(result, s);
            }
        }
    }

    cout << (result < 1e9 ? result : -1) << endl;
    return 0;
}