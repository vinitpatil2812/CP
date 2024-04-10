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
        int a, b;
        cin >> a >> b;

        if(a < b) {
            swap(a, b);
        }
        
        cout << max(a, 2 * b) * max(a, 2 * b) << endl;
    }

    return 0;
}