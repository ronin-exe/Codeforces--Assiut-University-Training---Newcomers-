#include <bits/stdc++.h>

long long ans(long long x, long long n){
    long long s=1;
    for(long long i=1;i<=n;i++){
        s*=x;
    }
    
    return s;
}

int main(){
    long long x,n;
    long long p;
    long long sum=0;
    std::cin>>x>>n;
    for(long long i=2;i<=n;i=i+2){
        p=ans(x,i);
        sum+=p;
    }
    std::cout<<sum;
    return 0;
}