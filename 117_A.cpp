// Problem: A. Creating Abbreviations
// Contest: Codeforces - Codeforces Round 1117 (Div. 2)
// URL: https://codeforces.com/contest/2257/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-->0){
		int w,a;
		cin>>w>>a;
		vector<string> words;
		unordered_set<char> first;
		while(w-->0){
			string s;
			cin>>s;
			words.push_back(s);
			first.insert(s[0]);
		}
		bool flag=true;
		while(a-->0){
			string s;
			cin>>s;
			for(int i=0;i<s.length();i++){
			if(!first.count((char)tolower(s[i])))
				flag=false;
			}
			first.insert((char)tolower(s[0]));
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}