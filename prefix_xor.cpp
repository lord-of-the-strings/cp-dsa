#include <vector>
#include <unordered_map>
int subarray(std::vector<int>& nums,int k){
    std::unordered_map<int,int> f;
    f[0] = 1;
    int curr = 0, count = 0;
    for (int x : nums) {
        curr ^= x;
        count += f[curr ^ k];
        f[curr]++;
    }
    return count;
}
