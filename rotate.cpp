#include <iostream>
#include <vector>
#include <deque>
void rotateArray(std::vector<int>& nums, int k){
    std::deque numq(nums.begin(),nums.end());
    for(int i=0;i<k;i++){
        int x=numq.front();
        numq.pop_front();
        numq.push_back(x);
    }
    nums.assign(numq.begin(),numq.end());
}
int main(){
    std::vector<int> vec;
    for(int x;std::cin>>x;)
        vec.push_back(x);
    int k;
    std::cin>>k;
    rotateArray(vec,k);
    for(int x:vec)
        std::cout<<x<<'\t';
    std::cout<<'\n';
}
