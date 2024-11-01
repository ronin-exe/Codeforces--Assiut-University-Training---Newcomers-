#include <bits/stdc++.h>
int main(){
    long long a,b,i,m=0;
    std::cin>>a>>b;
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            if(i>m){
                m=i;
            }
           
        }
    }
    std::cout<<m<<'\n';
    return 0;
}