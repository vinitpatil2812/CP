#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m = 1 << n;

    for(int i = 0; i < m; i++) {
        int sum = 0;

        for(int j = 0; j < n; j++) {
            if((1 << j) & i) {
                sum += a[j];
            } 
            else {
                sum -= a[j];
            }
        }

        if(sum % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}