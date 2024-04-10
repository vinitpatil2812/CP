#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        double equal = (double)(a + b) / 2.0;
        double diff = abs(equal - a);
 
        cout << ceil(diff / c) << endl; // Fixed the usage of ceil function
    }
 
    return 0;
}
