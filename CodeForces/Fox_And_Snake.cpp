#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string noPath(m, '.');
    noPath[m - 1] = '#';
    string path(m, '#');
    bool flag = 1;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            cout << noPath << endl;
            reverse(noPath.begin(), noPath.end());
        }
        else {
            cout << path << endl;
        }        
    }

    return 0;
}