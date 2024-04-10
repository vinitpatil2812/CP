#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int sum(int n) {
    return n * (n + 1) / 2;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, x ,y;
        cin >> n >> x >> y;

        int a = n - (n / x) - (n / (x * y));
        int b = a - (n / y) - (n / (x * y));

        cout << sum(n) - sum(a) - sum(a - (n / x * y)) - sum(b - (n / (x * y))) << endl;
    }

    return 0;
}