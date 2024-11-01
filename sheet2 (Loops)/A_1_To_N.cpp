#include <bits/stdc++.h>
int main(){
    long long n,i;
    std::cin>>n;
    for(i=1;i<=n;i++){
        std::cout<<i;
        if(i!=n){
            std::cout<<'\n';
        }
    }
    return 0;
}