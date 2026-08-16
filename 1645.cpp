// Problem: Nearest Smaller Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1645
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> nums;
	while(n-->0) {
		int x;
		cin>>x;
		nums.push_back(x);
	}
	//cout<<"input done"<<endl;
	stack<int> prev;
	//cout<<prev.empty()<<endl;
	for(int i=0;i<(int)nums.size();i++){
		while(!prev.empty()&&nums[prev.top()]>=nums[i])
			prev.pop();
		if(prev.empty()) cout<<0<<' ';
		else cout<<prev.top()+1<<' ';
		prev.push(i);
	}
}