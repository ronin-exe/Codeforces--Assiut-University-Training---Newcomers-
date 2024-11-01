#include <bits/stdc++.h>
int main(){
    int n,m;
    std::cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<m;i++){
        int x,g=0;
        std::cin>>x;
        for(int i=0;i<n;i++){
        if(a[i]==x){
            std::cout<<"found"<<'\n';
            g++;
            break;
        }
    }
    if(g==0){
            std::cout<<"not found"<<'\n';
        }
    }
    return 0;
}