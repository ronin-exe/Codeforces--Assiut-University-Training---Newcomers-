#include <bits/stdc++.h>

int main(){
    int n,q;
    std::cin>>n>>q;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    b[0]=a[0];

    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }

    int r,l;
    for(int i=0;i<q;i++){
        std::cin>>r>>l;
        std::cout<<b[l]-b[r-1]<<'\n';
    }

    return 0;
}