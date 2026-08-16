#include <vector>
#include <unordered_set>
void zeros(std::vector<std::vector<int>>& matrix){
    std::unordered_set<int> rm_col,rm_row;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                rm_col.insert(j);
                rm_row.insert(i);
            }
        }
    }
   for(int i=0;i<matrix.size();i++){
       for(int j=0;j<matrix[0].size();j++){
           if(rm_row.count(i)||rm_col.count(j)){
               matrix[i][j]=0;
           }
       }
   }
}
