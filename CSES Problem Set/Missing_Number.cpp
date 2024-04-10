#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    ll sum = 0;

    for(ll i = 1; i < n; i++) {
        ll temp;
        cin >> temp;

        sum += temp;
    }

    cout << (n * (n + 1) / 2) - sum;
    return 0;
}