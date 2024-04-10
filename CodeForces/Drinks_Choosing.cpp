#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    vector<int> drinks(n);

    for(int i = 0; i < n; i++) {
        cin >> drinks[i];
    }

    sort(drinks.begin(), drinks.end());

    int count = 0;

    for(int i = 0; i < n - 1; i++) {
        if(drinks[i] == drinks[i + 1]) {
            count++;
            i++;
        }
    }

    cout << count * 2 + (((n + 1) / 2) - count);
    
    return 0;
}