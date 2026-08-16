#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    int k;
    std::cin>>k;
    std::vector<int> nums;
    for(int x; std::cin>>x;)
        nums.push_back(x);
    int n=nums.size();
    int left=0,right=0;
    int maxlen=0;
    int sum=nums[0];
    while(right<n){
        while(left<=right&&sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k)
            maxlen=std::max(maxlen,right-left+1);
        right++;
        if(right<n)
            sum+=nums[right];
    }
    std::cout<<maxlen<<'\n';
}
