#include <bits/stdc++.h>

bool prime(long long n){
        if(n==1){
            return false;
        }
        for(long long i=sqrt(n);i>=2;i--){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n,t;
    std::cin>>t;
    for(long long i=0;i<t;i++){
        std::cin>>n;
        if(prime(n)){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
        if(i!=t-1){
            std::cout<<'\n';
        }
    }
    return 0;
}