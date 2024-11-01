#include <bits/stdc++.h>
int main(){
    long long n,s=0,x,t,i;
    std::string a;
    std::cin>>n;
    std::cin>>a;
    x = stol(a);
    for(;x!=0;){
        t=x%10;
        s+=t;
        x=x/10;
    }
    std::cout<<s;
}