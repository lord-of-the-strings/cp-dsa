#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t-->0){
    vector<int> values;
    int n,d;
    cin>>n>>d;
    for(int x;cin>>x;) values.push_back(x);
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(abs(values[i]-values[j])<=d){
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
