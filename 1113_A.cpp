// Problem: A. You Delete, I Delete
// Contest: Codeforces - Codeforces Round 1113 (Div. 2)
// URL: https://codeforces.com/contest/2248/problem/A
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
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
			if(s[i]=='0'){
				s[i]='2';
				break;}
		for(int i=0;i<s.length();i++)
			if(s[i]=='1'){
				s[i]='2';
				break;
				}
		for(int i=0;i<s.length();i++)
			if(s[i]!='2')
				cout<<s[i];
		cout<<endl;
	}
}