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
        int n, m, k, h;
        cin >> n >> m >> k >> h;

        int result = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(abs(h - x) % k == 0 && abs(h - x) / k < m && abs(h - x) > 0) {
                result++;
            }
        }

        cout << result << endl;
    }
    return 0;
}