#include <vector>
#include <algorithm>
std::vector<std::vector<int>> threeSum(std::vector<int>& nums){
    int sum=0;
    std::sort(nums.begin(),nums.end());
    std::vector<std::vector<int>> triplets;
    if(nums.size()<3) return triplets;
    for(int idx=0;idx<nums.size();idx++){
        if(nums[idx]>0) break;
        if(idx>0&&nums[idx]==nums[idx-1]) continue;
        int left=idx+1, right=nums.size()-1;
        sum=-1*nums[idx];
        while(left<right){
            if(nums[left]+nums[right]==sum){
                std::vector<int> curr;
                curr.push_back(nums[idx]);
                curr.push_back(nums[left]);
                curr.push_back(nums[right]);
                triplets.push_back(curr);
                left++;
                right--;
                while(left<right&&nums[left]==nums[left+1]) left++;
                while(left<right&&nums[right]==nums[right-1]) right--;
            }
            else if(nums[left]+nums[right]<sum) left++;
            else right--;
        }
    }
    return triplets;
}
