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

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        reverse(a.begin(), a.end());

        vector<int> b;

        for(int i = 0; i < n - 1; i++) {
            b.push_back(a[i]);

            if(a[i] < a[i + 1]) {
                b.push_back(a[i]);
            }
        }

        b.push_back(a[n - 1]);

        cout << b.size() << endl;

        for(int i = b.size() - 1; i >= 0; i--) {
            cout << b[i] << " ";
        }cout << endl;
    }

    return 0;
}