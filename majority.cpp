#include <iostream>
#include <vector>
#include <unordered_map>
int ele(std::vector<int>& nums){
    std::unordered_map<int, int> f;
    for(int x:nums){
        if(f.count(x)) f[x]++;
        else f[x]=1;
    }
    for(const auto& [x,fx]: f){
        if(fx>nums.size()/2){
            return x;
        }
    }
    return -1;
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;) nums.push_back(x);
    int res=ele(nums);
    std::cout<<res<<'\n';
}
