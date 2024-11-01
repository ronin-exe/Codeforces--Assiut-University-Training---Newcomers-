#include <bits/stdc++.h>
int main(){
    int a,i,j;
    std::cin>>a;
    for(i=a;i>=1;i--){
        for(j=i;j>=1;j--){
            std::cout<<"*";
        }
        if(i!=1){
            std::cout<<'\n';
        }
        
    }
    return 0;
}