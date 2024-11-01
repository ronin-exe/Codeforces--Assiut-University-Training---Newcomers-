#include <bits/stdc++.h>
int main(){
    int a,b,s,i;
    for(;;){
        std::cin>>a>>b;
        s=0;
            if(a<=0 || b<=0){
                 break;
             }
        if(b>=a){
            for(i=a;i<=b;i++){
                std::cout<<i<<" ";
                s+=i;
            }
            std::cout<<"sum ="<<s<<'\n';
        }
        else{
            for(i=b;i<=a;i++){
                std::cout<<i<<" ";
                s+=i;
            }
            std::cout<<"sum ="<<s<<'\n';
        }
    }
    return 0;
}