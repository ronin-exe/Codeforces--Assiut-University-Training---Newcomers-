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
    b=0;
    for(i=a;i>=1;i--){
        for(int v=0;v<b;v++){
                std::cout<<" ";
            }
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
        b++;
    }
    return 0;
}