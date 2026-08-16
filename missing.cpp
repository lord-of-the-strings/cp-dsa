#include <iostream>
#include <vector>
#include <unordered_set>
int missingNumber(std::vector<int>& nums){
    std::unordered_set<int> set(nums.begin(),nums.end());
    for(int n=0;n<=nums.size();n++){
        if(!set.count(n))
            return n;
    }
    return -1;
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    int res=missingNumber(vec);
    std::cout<<res<<'\n';
}
