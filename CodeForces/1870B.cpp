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
        int n, m;
        cin >> n >> m;

        int a = 0, b = 0;

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;

            a ^= temp;
        }

        for(int i = 0; i < m; i++) {
            int temp;
            cin >> temp;

            b |= temp;
        }

        if(n % 2) {
            cout << a << " " << (a | b) << endl;
        }
        else {
            cout << (a & (~b)) << " " << a << endl; 
        }
    }

    return 0;
}