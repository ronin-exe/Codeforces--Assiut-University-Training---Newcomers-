#include <bits/stdc++.h>
int main(){
    int n,m,x;
    std::cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<=m;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        x=a[i];
        b[x]+=1;
    }
    for(int i=1;i<=m;i++){
        std::cout<<b[i]<<'\n';
    }
    return 0;
}