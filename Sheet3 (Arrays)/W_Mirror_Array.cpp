#include <bits/stdc++.h>
int main(){
    int n,m;
    std::cin>>n>>m;
    int a[n][m],b[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0,x=m-1;j<m;j++,x--){
            std::cin>>a[i][j];
            b[i][x]=a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           std::cout<<b[i][j]<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}