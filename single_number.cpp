#include <iostream>
#include <unordered_map>
#include <vector>
int singleNumber(std::vector<int>& nums){
    std::unordered_map<int,int> f;
    for(int x:nums){
        if(!f.count(x))
            f[x]=1;
        else
            f[x]++;
    }
    for(const auto& [num,freq]: f)
        if(freq==1)
            return num;
    return -1;
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    int res=singleNumber(nums);
    std::cout<<res<<'\n';
}
