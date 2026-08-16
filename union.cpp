#include <iostream>
#include <vector>
#include <set>
std::vector<int> unionArray(std::vector<int>& nums1, std::vector<int>& nums2){
    std::set<int> uniSet(nums1.begin(),nums1.end());
    uniSet.insert(nums2.begin(),nums2.end());
    std::vector<int> uniVec(uniSet.begin(),uniSet.end());
    return uniVec;
}
int main(){
    std::vector<int> vec1,vec2;
    for(int x;std::cin>>x;)
        vec1.push_back(x);
    for(int x;std::cin>>x;)
        vec2.push_back(x);
    std::vector<int> res=unionArray(vec1,vec2);
    for(int i=0;i<res.size();i++)
        std::cout<<res[i]<<'\t';
    std::cout<<'\n';
}
