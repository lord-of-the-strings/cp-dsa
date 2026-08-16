#include <iostream>
#include <vector>
void sort(std::vector<int>& nums){
    int n0=0,n1=0,n2=0;
    for(int x:nums){
        if(x==0) n0++;
        else if(x==1) n1++;
        else n2++;
    }
    for(int i=0;i<n0;i++) nums[i]=0;
    for(int i=n0;i<n0+n1;i++) nums[i]=1;
    for(int i=n0+n1;i<n1+n2+n0;i++) nums[i]=2;
}
int main(){
    std::vector<int> nums;
    for(int x;std::cin>>x;){
        nums.push_back(x);
    }
    sort(nums);
    for(int x:nums) std::cout<<x<<'\t';
    std::cout<<'\n';
}
