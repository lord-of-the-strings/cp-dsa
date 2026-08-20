// Problem: Coin Combinations I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1635
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
int main(){
	ll MOD=1e9+7;
	int n,x;
	std::cin>>n>>x;
	std::vector<int> coins;
	for(int i=0;i<n;i++){
		int x;
		std::cin>>x;
		coins.push_back(x);
	}
	std::vector<ll> dp(x+1,0);
	dp[0]=1;
	for(int i=1;i<=x;i++)
		for(int c: coins)
			if(i-c>=0)
				dp[i]=(dp[i]+dp[i-c])%MOD;
	std::cout<<dp[x]<<'\n';
}