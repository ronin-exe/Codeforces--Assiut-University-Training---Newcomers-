#include<bits/stdc++.h>
int main(){
    int x,y;
    std::cin>>x>>y;
    int a[x],b[y];
    for(int i=0;i<x;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<y;i++){
        std::cin>>b[i];
    }
    int g=0;
    for(int i=0;i<x;i++){
        if(g==y){
            break;
        }
        if(a[i]==b[g]){
            g++;
        }
    }
    if(g==y){
        std::cout<<"YES"<<'\n';
    }
    else{
        std::cout<<"NO"<<'\n';
    }
    return 0;
}