#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> pylons(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        cin >> pylons[i];
    }

    ll result = 0, energy = 0;

    for(int i = 1; i <= n; i++) {
        energy += pylons[i - 1] - pylons[i];

        // cout << i << energy << endl;
        // cout << "fasdhg";

        if(energy < 0) {
            result += energy;
            energy = 0;
        }
    }
    
    cout << -result << endl;

    return 0;
}