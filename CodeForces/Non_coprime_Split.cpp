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
        int l, r;
        cin >> l >> r;
        int a = -1, b = -1;

        for(int i = l - 2; i <= r - 2; i++) {
            if(i % 2 == 0 && i > 0 && l != r) {
                a = 2;
                b = i;
                break;
            }
        }

        if(l == r && l % 2 == 1) {
            if((l - 3) % 3 == 0) {
                a = 3;
                b = l - 3;
            }                      
        }

        // for(int i = l - 2; i <= r - 2; i++) {
        //     if(i % 2 == 0 && i > 0) {
        //         cout << 2 << " " << i << endl;
        //         break;
        //     }
        // }

        if(a == -1) {
            cout << -1 << endl;
        }
        else {
            cout << a << " " << b << endl;
        }
    }

    return 0;
}