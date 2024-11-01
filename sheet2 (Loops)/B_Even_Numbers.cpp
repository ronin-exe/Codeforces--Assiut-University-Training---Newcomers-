#include <bits/stdc++.h>
int main(){
    long long n,i;
    std::cin>>n;
    if(n==1){
        std::cout<<"-1";
    }
    else{
    for(i=2;i<=n;i++){
        if(i%2==0){
            std::cout<<i;
            if(n%2==0 && i!=n){
            std::cout<<'\n';
        }
        else if(n%2!=0 && i!=(n-1)){
            std::cout<<'\n';
        }
        }
        
    }
    }
    return 0;
}