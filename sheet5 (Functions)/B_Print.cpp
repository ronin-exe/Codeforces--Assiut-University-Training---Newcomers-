#include <bits/stdc++.h>
void num(int n){
    for(int i=1;i<=n;i++){
        std::cout<<i;
        if(i!=n){
            std::cout<<" ";
        }
        
    }
}

int main(){
    int n;
    std::cin>>n;
    num(n);
    return 0;
}