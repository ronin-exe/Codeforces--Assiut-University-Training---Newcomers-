#include <bits/stdc++.h>
int main(){
    long long a,b,x,i,j;
    int p=1;
    std::cin>>a>>b;
    for(i=a;i<=b;i++){
        int f=1;
        int t=i;
       for(;t!=0;){
        x=t%10;
        if(x!=4 && x!=7){
            f=2;
            break;
        }
            t=t/10;
       }
       if(f==1){
        p++;
        std::cout<<i<<" ";
       }
    }
    if(p==1){
        std::cout<<-1;
    }
    return 0;
}