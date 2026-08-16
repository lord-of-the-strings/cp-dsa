#include <vector>
#include <unordered_map>
std::vector<int> element(std::vector<int>& nums){
    std::unordered_map<int,int> freq;
    for(int x:nums){
        if(!freq.count(x)) freq[x]=1;
        else freq[x]++;
    }
    std::vector<int> list;
    int target=nums.size()/3;
    for(const auto& [x,f]: freq){
        if(f>target) list.push_back(x);
    }
    return list;
}
