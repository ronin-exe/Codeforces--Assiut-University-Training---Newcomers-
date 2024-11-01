#include <bits/stdc++.h>
int main(){
    int a,b,i,j,k;
    std::cin>>a;
    b=a;
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(j!=b){
                std::cout<<" ";
            }
            else{
                if(i==1){
                    std::cout<<"*"<<'\n';
                }
                else{
                    for(k=1;k<=i*2-1;k++){
                        std::cout<<"*";
                        if(k==i*2-1){
                            std::cout<<'\n';
                        }
                    }
                }
            }
            
        }
        b--;
    }
    return 0;
}