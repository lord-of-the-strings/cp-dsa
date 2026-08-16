#include <vector>
#include <climits>
#include <algorithm>
#include <iostream>
int buySell(std::vector<int>& prices){
    int min=INT_MAX,profit=0;
    for(int price:prices){
        min=std::min(price,min);
        if(price>=min)
            profit=std::max(profit,price-min);
    }
    return profit;
}
int main(){
    std::vector<int> prices;
    for(int x;std::cin>>x;)
        prices.push_back(x);
    int res=buySell(prices);
    std::cout<<res<<'\n';
}
