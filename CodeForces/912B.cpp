#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    cout << ((k - 1) ? ((1ll << int(log2l(n) + 1)) - 1) : n) << endl;
    return 0;
}