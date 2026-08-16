// Problem: A. Boss Fight
// Contest: Codeforces - Codeforces Round 1115 (Div. 2)
// URL: https://codeforces.com/contest/2252/problem/A
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
		int n;
		cin>>n;
		vector<int> nums;
		int sum=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			sum+=x;
			nums.push_back(x);
		}
	unordered_map<int,int> f;
	for(int x : nums) f[x]++;
	int maxf=0,mode=0;
	for(const auto& [val,freq]: f){
		if(freq>maxf){
			maxf=freq;
			mode=val;
		}
	}
	sum-=mode*maxf;
	cout<<sum+mode*(min((int)nums.size()-maxf+2,maxf))<<endl;
}
}