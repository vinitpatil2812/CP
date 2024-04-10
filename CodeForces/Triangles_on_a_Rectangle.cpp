#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    #define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int w, h;
        int ans = INT_MIN;
        cin >> w >> h;

        int k, x, y;
        cin >> k;
        vector<int> temp(k);

        for(int i = 0; i < k; i++) {
            cin >> temp[i];
        }

        sort(temp.begin(), temp.end());
        ans = max(ans, (temp[k - 1] - temp[0]) * h);

        cin >> k;
        temp.resize(k);

        for(int i = 0; i < k; i++) {
            cin >> temp[i];
        }

        sort(temp.begin(), temp.end());
        ans = max(ans, (temp[k - 1] - temp[0]) * h);

        cin >> k;
        temp.resize(k);

        for(int i = 0; i < k; i++) {
            cin >> temp[i];
        }

        sort(temp.begin(), temp.end());
        ans = max(ans, (temp[k - 1] - temp[0]) * w);

        cin >> k;
        temp.resize(k);

        for(int i = 0; i < k; i++) {
            cin >> temp[i];
        }

        sort(temp.begin(), temp.end());
        ans = max(ans, (temp[k - 1] - temp[0]) * w);

        cout << ans << endl;
    }

    return 0;
}
