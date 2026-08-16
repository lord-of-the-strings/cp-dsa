#include <cmath>
#include <iostream>
int factorial(int n){
    int fact=1;
    for(int x=1;x<=n;x++) fact*=x;
    return fact;
}
int pascalTriangle(int r,int c){
    return factorial(r-1)/(factorial(c-1)*factorial(std::abs(r-c)));
}
int main(){
    int r,c;
    std::cin>>r>>c;
    int res=pascalTriangle(r,c);
    std::cout<<res<<'\n';
}
