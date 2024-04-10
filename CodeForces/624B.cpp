#include<bits/stdc++.h>
using namespace std;
#define int long long int
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> alpha(n);

    for(int i = 0; i < n; i++) {
        cin >> alpha[i];
    }

    sort(alpha.begin(), alpha.end(), greater<int> ());

    int result = 0;
    int last = INT_MAX;

    for(int i = 0; i < n; i++) {
        int curr = min(last - 1, alpha[i]);

        last = curr;

        if(curr <= 0) {
            break;
        }

        result += curr;

    }

    cout << result << endl;

    return 0;
}