#include<bits/stdc++.h>
using namespace std;
#define int long long int
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(auto &e: a)     cin>>e;
 
        vector<int> dp(n, 1e9);
 
        dp[0] = 1;
 
        if(a[0]<n)      dp[a[0]] = 0;
 
        for(int i=1; i<n; i++)
        {
            dp[i] = min(dp[i-1]+1, dp[i]);
 
            if(i+a[i]<n)        dp[i+a[i]] = min(dp[i+a[i]], dp[i-1]);
        }
 
        cout<<dp[n-1]<<"\n";
    }
    return 0;
}

