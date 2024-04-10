#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll isPossible(ll mid, ll n, ll k) {
    // Calculate the total number of pipes with the given number of splitters
    ll total = mid + (mid * (mid - 1)) / 2;

    return total;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
	cin>>n>>k;
	//here we need to represent n-1 as the sum of (k-1) elements
	if(n<=1){
		cout<<0;
		return 0;
	}
	--n;
	--k;
	if((k*(k+1))/2 <n){
		cout<<-1;
		return 0;
	}
	ll start=0,end=k;
	ll s1=(k*(k+1))/2;
	while(start+1<end){
		ll mid=(start+end)/2;
		ll s2=(mid*(mid+1))/2;
		if(s1-s2>=n){
			start=mid;
		}else{
			end=mid;
		}
	}
	cout<<k-start;

    return 0;
}
