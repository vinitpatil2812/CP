#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t; //number of test cases
	cin >> t;
	while(t--){
		int n, k; //read the input
		cin >> n >> k;
		string s;
		cin >> s;
		int a[k]; int b[k];
		for(int i=0; i< k; i++){cin >> a[i]; a[i]--;}
		for(int i=0; i< k; i++){cin >> b[i]; b[i]--;}
		int q;
		cin >> q;
		int cnt[n+1]={0}; //read and preprocess queries
		for(int i=0; i< q; i++){
			int x; cin >> x; cnt[x-1]++;
		}
		string ans="";
		for(int i=0; i<k; i++){ //treat each interval as a seperate test case
			string s1=s.substr(a[i], b[i]-a[i]+1);
			int sum=0;
			int l=a[i];
			int r=b[i];
			for(int j=l; j<=(l+r)/2; j++){
				sum+=cnt[j]+cnt[r-j+l];
				if(sum&1)swap(s1[j-l], s1[r-j]);
			}
			ans+=s1;
		}
		cout << ans << '\n';
	}
}