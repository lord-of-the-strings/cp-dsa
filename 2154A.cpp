#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-- >0){
        int n,k;
        cin>>n>>k;
        string bin;
        cin>>bin;
        int count=0,c0=0;
        if(bin[0]=='1') count++;
        for(int i=1;i<n;i++){
            if(bin[i]=='0') c0++;
            if(bin[i]=='1'){
                if(c0==k-1) count++;
                c0=0;
            }
        }
        cout<<count<<endl;
    }
}
