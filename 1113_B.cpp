// Problem: B. Merge to Match
// Contest: Codeforces - Codeforces Round 1113 (Div. 2)
// URL: https://codeforces.com/contest/2248/problem/B
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
	int n,m;
	cin>>n>>m;
	vector<int> a;
	vector<int> b;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		b.push_back(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(n<2*m){
		cout<<"NO"<<endl;
		continue;
	}
	int i=0;
	for(;i<m&&a[i]<b[i]&&b[i]<a[n-m+i];i++);
	if(i<m){
		cout<<"NO"<<endl;
		continue;
	}
	cout<<"YES"<<endl;
}
}