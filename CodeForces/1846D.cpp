#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10); cout.setf(ios::fixed);

    int t;
    cin >> t;

    while(t--) {
        int n, d, h;
        cin >> n >> d >> h;
        vector<int> y(n);
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }
        long double ans = (long double)d * h / 2.0;
        for (int i = 0; i + 1 < n; ++i) {
            if (y[i + 1] >= y[i] + h) ans += (long double)d * h / 2.0;
            else{
                long double d2 = (long double)d * (y[i] + h - y[i + 1]) / h;
                long double nh = y[i + 1] - y[i];
                ans += (d + d2) / 2.0 * nh;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}