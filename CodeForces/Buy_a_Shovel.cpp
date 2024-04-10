#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r;
    cin >> k >> r;

    for(int i = 1; i <= 10; i++) {
        if((i * k) % 10 == r || (i * k) % 10 == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}