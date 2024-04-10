#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if(n <= 2) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
        
        cout << n - 1 << " ";

        for(int i = 1; i <= n - 1; i++) {
            cout << i << " ";
        }cout << endl;

        cout << 1 << " " << n << endl;
    }

    return 0;
}