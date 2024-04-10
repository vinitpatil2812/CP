#include<bits/stdc++.h>
using namespace std;
#define int long long int
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;

    int maxi = LONG_MIN, mini = LONG_MAX, curr = 0;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        curr += temp;

        maxi = max(maxi, curr);
        mini = min(mini, curr);
    }

    if(maxi > w) {
        cout << 0 << endl;
        return 0;
    }

    int lf = max(0LL, -mini);
    int rg = min(w, w - maxi);

    if(lf > rg) {
        cout << 0 << endl;
    }
    else {
        cout << rg - lf + 1 << endl;
    }

    return 0;
}