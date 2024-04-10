#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void update(int k, int n, vector<int> &arr, long long &result) {
    for(int i = 0; i < n; i++) {
        long long small = LONG_MAX;
        long long big = LONG_MIN;
        long long sum = 0;
        int count = 0;

        for(int j = i; j < n; j += k) {
            sum += arr[j];
            count++;
            small = min(small, sum);
            big = max(big, sum);

            if(count == k) {
                sum = 0;
                count = 0;
            }
        }

        result = max(result, abs(small - big));
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = 0;

    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            update(i, n, arr, result);
        }
    }

    cout << result << endl;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
