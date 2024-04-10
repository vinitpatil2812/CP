#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    for(auto &digit : n) {
        if(digit > '4') {
            digit = '9' - digit + '0';  
        }
    }

    if(n.front() == '0') {
        n.front() = '9';
    }
    
    cout << n << endl;

    return 0;
}