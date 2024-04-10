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

        vector<int> array(n);
        vector<int> bits(32, 0);

        for(int i = 0; i < n; i++) {
            cin >> array[i];
        }

        for(int i = 0; i < 31; i++) {
            for(int j = 0; j < n; j++) {
                if((1 << i) & array[j]) {
                    bits[i]++;
                }
            }
        }

        for(int k = 1; k <= n; k++) {
            bool flag = 1;

            for(int i = 0; i < 31; i++) {
                if(bits[i] % k != 0) {
                    flag = false;
                    break;
                } 
            }

            if(flag) {
                cout << k << " ";
            }
        } cout << endl;
    }

    return 0;
}