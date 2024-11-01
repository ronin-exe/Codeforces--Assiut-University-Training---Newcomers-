#include <bits/stdc++.h>

int main(){
    int n,x,y;
    std::cin>>n>>x>>y;
    x--;
    y--;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        std::cin>>a[i][j];
    }
    }

    int t;
    for(int i=0;i<n;i++){
        t=a[i][x];
        a[i][x]=a[i][y];
        a[i][y]=t;
    }

    for(int i=0;i<n;i++){
        t=a[x][i];
        a[x][i]=a[y][i];
        a[y][i]=t;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        std::cout<<a[i][j];
        if(j!=n-1){
            std::cout<<" ";
        }
    }
    if(i!=n-1){
        std::cout<<'\n';
    }
}
return 0;
}