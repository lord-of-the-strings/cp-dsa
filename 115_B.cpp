// Problem: B. Always Changing
// Contest: Codeforces - Codeforces Round 1115 (Div. 2)
// URL: https://codeforces.com/contest/2252/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int n0=0,n1=0;
		for(int i=0;i<n;i++){
			if(s[i]=='0') n0++;
			else n1++;
		}
		int delta_n=n0-n1;
		if(abs(delta_n)>2){
			cout<<-1<<endl;
			continue;
		}
		int l=1;
		int l0=(s[0]=='0'?1:0);
		int l1=(s[1]=='1'?1:0);
		for(int i=1;i<n;i++){
			if(s[i]!=s[i-1]){
				l++;
				if(s[i]==0) l0++;
				else l1++;
			}
		}
		int delta_l=l0-l1;
		int ans=(n-l)+max(0,abs(delta_n-delta_l)-1);
		cout<<ans<<endl;
	}
}