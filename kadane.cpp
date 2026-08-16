#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>
int maxSubarray(std::vector<int>& nums){
    int running=0,max=INT_MIN;
    for(int x:nums){
        running+=x;
        max=std::max(max,running);
        if(running<0) running=0;
    }
    return max;
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    int res=maxSubarray(vec);
    std::cout<<res;
}
