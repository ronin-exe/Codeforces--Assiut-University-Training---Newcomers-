#include <bits/stdc++.h>
int main(){
    long long a,i;
    int x=1;
    std::cin>>a;
    for(i=2;i<a;i++){
        if(a%i==0){
            std::cout<<"NO"<<'\n';
            x=2;
            break;
        }
    }
    if(x==1){
        std::cout<<"YES"<<'\n';
    }
    return 0;
}