#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n + 1; i++) {
        for(int j = n - i; j > 0; j--) {
            cout << " " << " ";
        }

        for(int j = 0; j <= i; j++) {
            cout << j << " ";
        }

        for(int j = i - 1; j > 1; j--) {
            cout << j << " ";
        }

        if(i != 0) {
            cout << 0 << endl;
        }
        else {
            cout << endl;
        }    
    }

    for(int i = n - 1; i > 0; i--) {
        for(int j = n - i; j > 0; j--) {
            cout << " " << " "; 
        }

        for(int j = 0; j <= i; j++) {
            cout << j << " ";
        }

        for(int j = i - 1; j > 0; j--) {
            cout << i << " ";
        }

        cout << 0 << endl;
    }

    for(int i = 0; i < n; i++) {
        cout << " " << " ";
    }
    
    cout << 0;

    return 0;
}