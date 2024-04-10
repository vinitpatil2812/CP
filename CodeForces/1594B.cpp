#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int MOD = 1e9 + 7;
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        ll p = 1;
        ll result = 0;

        for(int i = 0; i < 31; i++) {
            if(k & (1 << i)) {
                result = (result + p) % MOD;
            }

            p *= n;
            p %= MOD;
        }

        cout << result << endl;
    }
    
    return 0;
}