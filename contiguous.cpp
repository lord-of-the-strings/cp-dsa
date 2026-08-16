#include <vector>
#include <unordered_map>
int maxlen(std::vector<int>& nums){
    int sum=0,max=0;
    std::unordered_map<int,int> prefix;
    for(int idx=0;idx<nums.size();idx++){
        sum+=nums[idx];
        if(sum==0) max=idx+1;
        else{
            if(prefix.find(sum)!=prefix.end()) max=std::max(max,idx-prefix[sum]);
            else prefix[sum]=idx;
        }
    }
    return max;
}
