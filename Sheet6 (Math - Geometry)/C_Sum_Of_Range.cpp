#include <bits/stdc++.h>

int main(){
    long long a,b;
    long long x,y;
    unsigned long long s;
    std::cin>>a>>b;
    x=std::max(a,b);
    y=std::min(a,b);
    int d;
    d=(x-y)+1;
    s=(d*(x+y))/2;

    std::cout<<s;
    return 0;
}