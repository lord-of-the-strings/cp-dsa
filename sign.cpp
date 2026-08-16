#include <vector>
#include <iostream>
std::vector<int> rearrange(std::vector<int>& nums){
    std::vector<int> positives, negatives;
    for(int x:nums){
        if(x>=0) positives.push_back(x);
        else negatives.push_back(x);
    }
    std::vector<int> result;
    for(int i=0;i<nums.size();i++){
        if(i<positives.size()) result.push_back(positives[i]);
        if(i<negatives.size()) result.push_back(negatives[i]);
    }
    return result;
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;) nums.push_back(x);
    std::vector<int> res=rearrange(nums);
    for(int x:res) std::cout<<x<<'\t';
    std::cout<<'\n';
}
