#include <iostream>
#include <algorithm>
#include <vector>
void moveZeroes(std::vector<int>& nums){
    int j=-1;
    for(int p=0;p<nums.size();p++){
        if(nums[p]==0){
            j=p;
            break;
        }
    }
    if(j==-1)
        return;
   for(int i=j+1;i<nums.size();i++){
       if(nums[i]!=0){
           std::swap(nums[i],nums[j]);
           j++;
       }
   }
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;)
        nums.push_back(x);
    moveZeroes(nums);
    for(int x:nums)
        std::cout<<x<<'\t';
    std::cout<<'\n';
}
