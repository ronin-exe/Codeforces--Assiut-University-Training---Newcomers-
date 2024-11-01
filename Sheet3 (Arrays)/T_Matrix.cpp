#include <bits/stdc++.h>
int main(){
    int n,s=0,m=0;
    std::cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            std::cin>>a[i][j];
        }
    }
    for(int i=0,j=n-1;i<n;i++,j--){
        m+=a[i][i];
        s+=a[i][j];
    }
    std::cout<<abs(m-s)<<'\n';
    return 0;
}