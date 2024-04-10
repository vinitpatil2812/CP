#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n + 1, 0), c(n + 1, 0);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i + 1] = a[i];
    }

    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;

        c[x] += (b[x] > b[y]);
        c[y] += (b[y] > b[x]);
    }

    sort(a.begin(), a.end());

    for(int i = 1; i <= n; i++) {
        cout << ((lower_bound(a.begin(), a.end(), b[i]) - a.begin()) - c[i]) << " ";
    }
    return 0;
}