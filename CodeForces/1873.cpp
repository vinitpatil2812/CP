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
        string a = "abc";
        int count = 0;

        for(int i = 0; i < 3; i++) {
            char t;
            cin >> t;

            if(t != a[i]) {
                count++;
            }
        }

        if(count == 2 || count == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}