// Problem: Collecting Numbers II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2217
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> vec;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		vec.push_back(x);
	}
	unordered_map<int,int> index;
	for(int i=0;i<n;i++)
		index[vec[i]]=i;
	for(int i=0;i<m;i++){
		int count=1;
		int a,b;
		cin>>a>>b;
		swap(vec[a-1],vec[b-1]);
		index[vec[a-1]]=a-1;
		index[vec[b-1]]=b-1;
		for(const auto& [val,idx]:index){
			int posx=idx;
			int posx1=index[val-1];
			if(posx<posx1) count++;
		}
		cout<<count<<endl;
	}
}