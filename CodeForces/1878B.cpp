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

        for(ll i = 6; i < n + 6; i++) {
            cout << i << " ";
        }
        
        cout << endl;        
    }

    return 0;
}