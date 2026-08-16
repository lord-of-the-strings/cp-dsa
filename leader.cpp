#include <vector>
#include <algorithm>
#include <iostream>
std::vector<int> leaders(std::vector<int>& nums){
    std::vector<int> leads;
    leads.push_back(nums[nums.size()-1]);
    for(int idx=nums.size()-2;idx>=0;idx--){
        if(nums[idx]>nums[idx+1]) leads.push_back(nums[idx]);
        else std::swap(nums[idx],nums[idx+1]);
    }
    std::reverse(leads.begin(),leads.end());
    return leads;
}

int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    std::vector<int>res=leaders(nums);
    for(int x:res) std::cout<<x<<'\t';
    std::cout<<'\n';
}
