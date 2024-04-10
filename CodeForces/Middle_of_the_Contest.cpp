#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string start, end;
    cin >> start >> end;

    int sh = 10 * (start[0] - '0') + (start[1] - '0');
    int sm = 10 * (start[3] - '0') + (start[4] - '0');

    int eh = 10 * (end[0] - '0') + (end[1] - '0');
    int em = 10 * (end[3] - '0') + (end[4] - '0');

    int total =  ((eh - sh) * 60) + (em - sm);

    if (total < 0) {
        total += 24 * 60; // Adding a full day in minutes
    }

    cout << setw(2) << setfill('0') << total / 60 << ":" << setw(2) << setfill('0') << total % 60 << endl;
    
    return 0;
}
