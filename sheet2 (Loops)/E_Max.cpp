#include <bits/stdc++.h>
int main(){
    long long n,a,i,j,m=0;
    std::cin>>n;
    for(i=0;i<n;i++){
        std::cin>>a;
        if(a>m){
            m=a;
        }
    }

    std::cout<<m<<'\n';
    return 0;
}