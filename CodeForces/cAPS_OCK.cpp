#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    for(int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    cout << s;
    
    return 0;
}