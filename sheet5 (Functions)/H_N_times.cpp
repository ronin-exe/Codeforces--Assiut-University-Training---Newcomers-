#include <bits/stdc++.h>

void out(int n, char c){
    for(int i=0;i<n;i++){
        std::cout<<c;
        if(i!=n-1){
            std::cout<<" ";
        }
    }
}

int main(){
    int t,n;
    char a;
    std::cin>>t;
    for( int i=0;i<t;i++){
        std::cin>>n>>a;
        out(n,a);
        if(i!=t-1){
            std::cout<<'\n';
        }
    }
    return 0;
}