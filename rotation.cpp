#include <vector>
#include <algorithm>
#include <iostream>
void rotate(std::vector<std::vector<int>>& matrix){
    for(int i=0;i<matrix.size()-1;i++){
        for(int j=i+1;j<matrix[0].size();j++){
            if(i!=j){
                std::swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
}
int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> matrix;
    for(int i=0;i<n;i++){
        std::vector<int> row;
        for(int j=0;j<n;j++){
            int x;
            std::cin>>x;
            row.push_back(x);
        }
        matrix.push_back(row);
    }
    rotate(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            std::cout<<matrix[i][j]<<'\t';
        std::cout<<'\n';
    }
}
