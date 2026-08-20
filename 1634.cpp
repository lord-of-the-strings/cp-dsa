#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1e9
int main(){
	int n,x;
	std::cin>>n>>x;
	std::vector<int> coins;
	for(int i=0;i<n;i++){
		int x;
		std::cin>>x;
		coins.push_back(x);
	}
	std::vector<int> dp(x+1,INF);
	dp[0]=0;
	for(int i=1;i<=x;i++){
		dp[i]=INF;
		for(int c: coins)
			if(i-c>=0)
				dp[i]=std::min(dp[i],dp[i-c]+1);
	}
	if(dp[x]==INF) std::cout<<-1<<'\n';
	else std::cout<<dp[x]<<'\n';
}