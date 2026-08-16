#include <vector>
#include <iostream>
int main(){
   int n,k;
   std::cin>>n;
   std::cin>>k;
   std::vector<int> circle;
   for(int num=1;num<=n;num++) circle.push_back(num);
   int idx=1;
   for(int count=0;count<n;count++){
       while(circle[idx]==0) idx=(idx+1)%n;
       std::cout<<circle[idx]<<'\t';
       circle[idx]=0;
       if(count==n-1) break;
       for(int steps=0;steps<k;){
           idx=(idx+1)%n;
           if(circle[idx]!=0) steps++;
       }
   }
   std::cout<<'\n';
}
