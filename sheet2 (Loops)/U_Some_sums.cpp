#include <bits/stdc++.h>
int main(){
    long long  n,a,b,i,j,t,s,s2=0;
    std::cin>>n>>a>>b;
    for(i=1;i<=n;i++){
        j=i;
        s=0;
        for(;j!=0;){
            t=j%10;
            j=j/10;
            s+=t;
        }

        if(s>=a && s<=b){
            s2+=i;
        }
    }
    std::cout<<s2<<'\n';
    return 0;
}