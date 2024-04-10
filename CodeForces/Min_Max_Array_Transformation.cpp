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

        vector<int> a(n), b(n), dmin(n), dmax(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int minElement = a[0];
        int maxElement = b[n - 1];

        for(int i = 0; i < n; i++) {
            dmin[i] = b[i] - minElement;
        }

        for(int i = 0; i < n; i++) {
            dmax[i] = maxElement - a[i];
        }

        for(int i = 0; i < n; i++) {
            cout << dmin[i] << " ";
        }cout << endl;

        for(int i = 0; i < n; i++) {
            cout << dmax[i] << " ";
        }cout << endl;
    }

    return 0;
}