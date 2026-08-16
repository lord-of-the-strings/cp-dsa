// Problem: Nested Ranges Check
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2168
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
struct range{
	int l,r,in;
	bool operator<(const range& other) const{
		if(l==other.l)
			return r>other.r;
		return l<other.l;
	}
};
int main(){
	int n;
	cin>>n;
	vector<vector<int>> q;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		q.push_back({a,b});
	}
	vector<range> ranges(n);
	vector<int> contains(n),contained(n);
	for(int i=0;i<n;i++){
		ranges[i].l=q[i][0];
		ranges[i].r=q[i][1];
		ranges[i].in=i;
	}
	sort(ranges.begin(),ranges.end());
	int minend=2e9;
	for(int i=n-1;i>=0;i--){
		if(ranges[i].r>=minend)
			contains[ranges[i].in]=1;
		minend=min(minend,ranges[i].r);
	}
	int maxend=0;
	for(int i=0;i<n;i++){
		if(ranges[i].r<=maxend){
			contained[ranges[i].in]=1;
		}
		maxend=max(maxend,ranges[i].r);
	}
	for(int i=0;i<n;i++) cout<<contains[i]<<' ';
	cout<<endl;
	for(int i=0;i<n;i++) cout<<contained[i]<<' ';
	cout<<endl;
	
}