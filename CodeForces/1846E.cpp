#include<bits/stdc++.h>
using namespace std;
#define ll long long int

set<ll> st;


  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(long long k = 2; k <= 1000; k++) {
        long long val = k + 1;
        long long p = k * k;
        for(int cnt = 2; cnt <= 20; cnt++) {
            val += p;
            if(val > 1e6) {
                break;
            }

            st.insert(val);
            p *= k;
        }
    }

    int t;
    cin >> t;


    while(t--) {
        int n;
        cin >> n;

        if(st.count(n)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}