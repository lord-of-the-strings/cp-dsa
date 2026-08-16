#include <vector>
#include <unordered_map>
std::vector<int> find(std::vector<int> nums){
    int n=nums.size();
    int a,b;
    std::unordered_map<int,int> f;
    for(int x:nums)
        f[x]++;
    for(const auto& [num,freq]: f){
        if(freq==2){
            a=num;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(!f.count(i)){
            b=i;
            break;
        }
    }
    return {a,b};
}
