#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
std::vector<int> twoSum(std::vector<int>& nums, int target){
   int left=0,right=nums.size()-1;
   int sum=0;
   std::unordered_map<int,int> idx;
   for(int i=0;i<nums.size();i++){
      idx[nums[i]]=i;
   }
   std::sort(nums.begin(),nums.end());
   while(left<right){
       sum=nums[left]+nums[right];
       if(sum<target) left++;
       if(sum>target) right--;
       if(sum==target){
           std::vector<int> vec;
           vec.push_back(idx[nums[left]]);
           vec.push_back(idx[nums[right]]);
           return vec;
       }
   }
   std::vector<int> vec;
   return vec;
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    int k;
    std::cin>>k;
    std::vector<int> ans=twoSum(vec,k);
    std::cout<<ans[0]<<'\t'<<ans[1]<<'\n';
}
