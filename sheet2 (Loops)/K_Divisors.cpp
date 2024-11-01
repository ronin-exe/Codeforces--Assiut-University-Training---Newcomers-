#include <bits/stdc++.h>
int main(){
    long long a,i;
    std::cin>>a;
    for(i=1;i<=a;i++){
        if(a%i==0){
            std::cout<<i<<'\n';
        }
    }
    return 0;
}