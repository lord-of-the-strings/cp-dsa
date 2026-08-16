#include <vector>
#include <algorithm>
#include <iostream>
void next(std::vector<int>& nums){
    int brk=-1,swap=0;
    for(int idx=nums.size()-2;idx>=0;idx--){
        if(nums[idx]<nums[idx+1]){
            brk=idx;
            break;
        }
    }
    if(brk==-1){
        std::reverse(nums.begin(),nums.end());
        return;
    }
    for(int idx=nums.size()-1;idx>=0;idx--){
        if(nums[idx]>nums[brk]){
            std::swap(nums[idx],nums[brk]);
            break;
        }
    }
    std::reverse(nums.begin()+brk+1,nums.end());
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    next(nums);
    for(int x:nums) std::cout<<x<<'\t';
    std::cout<<'\n';
}
