#include <bits/stdc++.h>
int main(){
    int t,n;
    std::cin>>t;
     std::string a;
    for(int i=0;i<t;i++){
        std::cin>>a;
    n=a.size();
    if(n<=10){
        std::cout<<a<<'\n';
    }
    else{
        std::cout<<a[0]<<(n-2)<<a[n-1]<<'\n';
    }
    }
    return 0;
}