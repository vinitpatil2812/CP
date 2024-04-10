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

        int sum = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            sum += x;
        }

        cout << (sum % 2 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}