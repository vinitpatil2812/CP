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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;
        int two = 0;
        int result = INT_MAX;

        for(int i = 0; i < n; i++) {
            if(arr[i] % k == 0) {
                found = true;
            }

            if(arr[i] % 2 == 0) {
                two++;
            }

            result = min(result, k - (arr[i] % k));
        }

        if(found) {
            cout << 0 << endl;
        }
        else {
            if(k == 4) {
                cout << min(abs(2 - two), result) << endl;
            }
            else {
                cout << result << endl;
            }
        }
    }
    return 0;
}