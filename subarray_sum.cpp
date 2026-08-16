#include <vector>
#include <unordered_map>
int sum(std::vector<int> nums, int k){
    int count=0,pref=0;
    std::unordered_map<int,int> prefix;
    prefix[0]=1;
    for(int x:nums){
        pref+=x;
        int rem=k-pref;
        if(prefix.find(pref)!=prefix.end()) count+=prefix[rem];
        prefix[rem]++;
    }
    return count;
}
