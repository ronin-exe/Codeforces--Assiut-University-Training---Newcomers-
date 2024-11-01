#include <bits/stdc++.h>
int main(){
    int a,b,i;
    char s;
    std::cin>>s>>a;
    for(i=1;i<=a;i++){
        std::cin>>b;
        for(int j=0;j<b;j++){
            std::cout<<s;
        }
        if(i!=a){
            std::cout<<'\n';
        }
    }
    return 0;
}