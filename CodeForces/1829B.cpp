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

        int result = 0, len = 0;

        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if(a == 1) {
                len = -1;
            }

            len++;
            result = max(len, result);
        }

        cout << result << endl;
    }

    return 0;
}