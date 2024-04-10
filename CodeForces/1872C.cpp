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

        if(l != r) {
            if(r <= 3) {
                cout << -1 << endl;
            }
            else {
                cout << r / 2 << " " << r / 2 << endl;
            }
        }
        else {
            bool prime = true;

            for(int i = 2; i * i <= l; i++) {
                if(l % i == 0) {
                    prime = false;
                    cout << i << " " << l - i << endl;
                    break;
                }
            }

            if(prime) {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}