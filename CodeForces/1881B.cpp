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
        vector<int> v(3);

        for(int i = 0; i < 3; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if(v[1] % v[0] == 0 && v[2] % v[0] == 0) {
            if(v[1] / v[0] - 1 + v[2] / v[0] - 1 <= 3) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }        
    }
    return 0;
}