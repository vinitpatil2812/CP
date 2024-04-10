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
        vector<bool> visited(k + 1, false);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            visited[arr[i]] = true;
        }

        vector<int> prefix;
        vector<int> suffix;

        int temp = 0;

        for(int i = 0; i < n; i++) {
            temp = max(temp, arr[i]);
            prefix.push_back(temp);
        }

        temp = 0;

        for(int i = n - 1; i >= 0; i--) {
            temp = max(temp, arr[i]);
            suffix.push_back(temp);
        }

        for(int i = 1; i <= k; i++) {
            if(!visited[i]) {
                cout << "0 ";
                continue;
            }

            auto itr = lower_bound(prefix.begin(), prefix.end(), i);
            int start = itr - prefix.begin();

            auto itr1 = lower_bound(suffix.begin(), suffix.end(), i);
            int end = itr1 - suffix.begin();

            end = n - 1 - end;

            cout << 2 * (end - start + 1) << " ";
        }

        cout << endl;
    }

    return 0;
}