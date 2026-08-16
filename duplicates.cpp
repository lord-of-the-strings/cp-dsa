#include <iostream>
#include <vector>
#include <set>
int removeDuplicates(std::vector<int>& nums){
    std::set<int> numset(nums.begin(),nums.end());
    nums.assign(numset.begin(),numset.end());
    return numset.size();
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    int n=removeDuplicates(vec);
    std::cout<<n<<'\n';
}
