#include <bits/stdc++.h>
int main(){
    int a,b,t,g=0;
    std::cin>>a>>b;
    int x[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        std::cin>>x[i][j];
    }
    }
    std::cin>>t;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
        if(x[i][j]==t){
            std::cout<<"will not take number"<<'\n';
            g++;
            return 0;
        }
    }
    }
    if(g==0){
        std::cout<<"will take number"<<'\n';
    }
    return 0;

}