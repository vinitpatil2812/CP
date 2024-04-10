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

        int result = 0, length = 1;

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n - 1; i++) {
            if(arr[i + 1] - arr[i] <= k) {
                length++;
            }
            else {
                length = 1;
            }

            result = max(result, length);
        }

        if(n <= 1) {
            cout << "0" << endl;
            continue;
        } 

        cout << n - result << endl;
    }

    return 0;
}