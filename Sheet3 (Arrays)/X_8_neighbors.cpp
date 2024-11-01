#include <bits/stdc++.h>
int main(){
    int n,m;
    std::cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            std::cin>>a[i][j];
        }
    }
    int d,e,g,f;
    std::cin>>d>>e;
    g=d-1;
    f=e-1;
    if(a[g][f-1]!='.' && a[g][f+1]!='.' && a[g-1][f]!='.' && a[g+1][f]!='.' && a[g-1][f-1]!='.' && a[g+1][f+1]!='.' && a[g+1][f-1]!='.' && a[g-1][f+1]!='.'){
        std::cout<<"yes";
    }
    else{
        std::cout<<"no";
    }
    return 0;
}