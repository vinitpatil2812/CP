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

        int a, b, result = 0, index = 0;

        for(int i = 0; i < n; i++) {
            cin >> a;
            cin >> b;

            if(a <= 10) {
                if(b > result) {
                    result = b;
                    index = i + 1;
                }
            }
        }

        cout << index << endl;
    }

    return 0;
}