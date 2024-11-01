#include <bits/stdc++.h>
int main(){
    int n,a,i,j;
    unsigned long long f=1;
    std::cin>>n;
    for(i=1;i<=n;i++){
        f=1;
        std::cin>>a;
        if(a==0 || a==1){
            std::cout<<1<<'\n';
        }
        else{
            for(j=1;j<=a;j++){
                f*=j;
            }
        
        std::cout<<f<<'\n';
        }
    }
    return 0;
}