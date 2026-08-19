// Problem: A. Hot Potatoes at the Fairy Warehouse
// Contest: Codeforces - Codeforces Round 1116 (Div. 1)
// URL: https://codeforces.com/problemset/problem/2255/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		while(k-->0){
			for(int i=0;i<n*2;i++){
				if(s[i]=='1'&&s[(i+1)%(n*2)]=='0'){
					s[i]='0';
					s[(i+1)%(n*2)]='1';
				}
			}
		}
		int blue=0,red=0;
		for(int i=0;i<n*2;i++){
			if(i%2==0&&s[i]==1) blue++;
			else if(i%2==1) red++;
		}
		cout<<red<<blue<<endl;
	}
}