#include <iostream>
#include <vector>
#include <algorithm>
int find(std::vector<int>& nums){
    int c=0,mc=0;
    for(int x:nums){
        if(x==1)
            c++;
        else{
            mc=std::max(mc,c);
            c=0;
        }
    }
    return mc;
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    int res=find(nums);
    std::cout<<res<<'\n';
}
