#include <iostream>
#include <vector>
#include <algorithm>
int longest(std::vector<int>& nums){
    int count=0,max=0;
    std::sort(nums.begin(),nums.end());
    for(int idx=0;idx<nums.size();idx++){
        if(idx!=nums.size()-1&&nums[idx]==nums[idx+1]-1) count++;
        else{
            if(count!=0) count++;
            max=std::max(max,count);
            count=0;
        }
    }
    return max;
}

int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    int res=longest(nums);
    std::cout<<res<<'\n';
}
