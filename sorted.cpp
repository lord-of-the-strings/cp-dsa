#include <iostream>
#include <vector>
bool isSorted(std::vector<int>& nums){
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    bool res=isSorted(vec);
    std::cout<<res<<'\n';
}
