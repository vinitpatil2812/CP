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
        vector<int> v(n);

        int wrong  = 0;

        for(int i = 0; i < n; i++) {
            cin >> v[i];

            if(i % 2 != v[i] % 2) {
                wrong++;
            }
        }

        if(wrong % 2) {
            cout << -1 << endl;
        }
        else {
            cout << wrong / 2 << endl;
        }
    }
    
    return 0;
}