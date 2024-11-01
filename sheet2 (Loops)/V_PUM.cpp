#include <bits/stdc++.h>
int main(){
    int a,i,j,x;
    std::cin>>a;
    x=1;
    for(i=0;i<a;i++){
        for(j=1;j<=4;j++){
            if(j!=4){
                std::cout<<x<<" ";
            }
            else{
                std::cout<<"PUM"<<'\n';
            }
            x++;
        }
    }
    return 0;
}