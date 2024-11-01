#include <bits/stdc++.h>
int main(){
    int a,i,j;
    std::cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            std::cout<<"*";
        }
        if(i!=a){
            std::cout<<'\n';
        }
        
    }
    return 0;
}