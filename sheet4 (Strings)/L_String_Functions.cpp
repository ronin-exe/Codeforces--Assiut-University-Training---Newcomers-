#include <bits/stdc++.h>
int main(){
    int n,x;
    std::cin>>n>>x;
    std::string a,b,c;
    std::cin>>a;
    int p,q;
    for(int i=0;i<x;i++){
        std::cin>>b;
        if(b=="pop_back"){
            a.pop_back();
            std::cout<<a;
        }
        else if(b=="front"){
            std::cout<<a.front();
        }
        else if(b=="back"){
            std::cout<<a.back();
        }
        else if(b.substr(0,4)=="sort"){
            p=b[6]-'0';
            q=b[8]-'0';
            std::sort(a+(p-1),a+(q-1));
        }
    }
}