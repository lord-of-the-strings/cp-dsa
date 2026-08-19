// Problem: B. Gigantomachy
// Contest: Codeforces - Codeforces Round 1117 (Div. 2)
// URL: https://codeforces.com/contest/2257/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n,m;
		cin>>n>>m;
		vector<int> a,b;
		int tn=n,tm=m;
		while(tn-->0){
			int x;
			cin>>x;
			a.push_back(x);
		}
		while(tm-->0){
			int x;
			cin>>x;
			b.push_back(x);
		}
		int suma=a[0]+n-1,sumb=b[0]+m-1;
		if(suma>=sumb)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
}