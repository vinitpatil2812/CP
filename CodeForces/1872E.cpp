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

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        int x0 = 0, x1 = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0') {
                x0 ^= arr[i];
            }
            else {
                x1 ^= arr[i];
            }
        }

        vector<int> prefix(n);
        prefix[0] = arr[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] ^ arr[i];
        }

        int q;
        cin >> q;

        while(q--) {
            int tp;
            cin >> tp;

            if(tp == 1) {
                int l, r;
                cin >> l >> r;
                l--, r--;

                int temp = prefix[r] ^ (l > 0 ? prefix[l - 1] : 0);
                x1 ^= temp;
                x0 ^= temp;
            }
            else {
                int g;
                cin >> g;

                if(g == 0) {
                    cout << x0 << " ";
                }
                else {
                    cout << x1 << " ";
                }
            }

        }

        cout << endl;
    }
    
    return 0;
}