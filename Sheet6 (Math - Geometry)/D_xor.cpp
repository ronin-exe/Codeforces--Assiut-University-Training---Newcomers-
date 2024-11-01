#include <bits/stdc++.h>

int main(){

    long long a,b,q;
    std::cin>>a>>b>>q;

    long long x=q%3;

    if(x==1){std::cout<<a;}
    else if(x==2){std::cout<<b;}
    else {std::cout<<(a^b);}
    return 0;
}